#include<bits/stdc++.h>

using namespace std;

bool dp[1001];

int can_change(long long v[], int tam, int change) {

    if (change == 0) {
	return dp[change] = true;
    }

    if (change == -1 || !dp[change]) {
	return dp[change] = false;
    }

    dp[change] = false;
    
    for(int i = 0; i < tam; i++) {
	if (change % v[i] == 0)
	    return dp[change] = true;
	if (v[i] <= change) {
	    dp[change] = can_change(v, tam, change-v[i]);
	}
	if (dp[change])
	    return true;
    }
    
    return false;
}

int main () {
    int tam = 0, change;
    cin >> tam >> change;
    long long v[tam];

    memset(dp, true, sizeof(dp));

    for(int i = 0; i < tam; i++) {
	cin >> v[i];
    }

    cout << (can_change(v, tam, change) ? "S" : "N") << "\n";
}

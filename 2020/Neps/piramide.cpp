#include<bits/stdc++.h>

using namespace std;

int dp[100][100];
int m[100][100];

int solve(int l, int c) {
    if (dp[l][c] != -1) return dp[l][c];
    
    if(l == 0) return dp[l][c] = m[0][c];
    
    int soma = 0;
    for(int i=0; i<l+1; i++) {
        soma += m[l][c+i];
    }
    
    return dp[l][c] = soma + min(solve(l-1, c), solve(l-1, c+1));
}

int main () {

    int n;
    
    cin >> n;
    
    for(int l=0; l < n; l++) {
        for(int c=0; c < n; c++) {
            cin >> m[l][c];
            dp[l][c] = -1;
        }
    }
    
    cout << solve(n-1, 0) << endl;
    
    return 0;
}

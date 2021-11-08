#include<bits/stdc++.h>

using namespace std;

int main () {
    ios_base::sync_with_stdio(false);
	cin.tie(NULL);
    
    long long t, N, K, mod = 1000000007;
    cin >> t;
    while(t--) {
        cin >> N >> K;
        N = ((N+1) * (N+2) / 2 ) % mod;
        cout << (N * (K+1)) % mod << "\n";
    }
    
    return 0;
}

#include<bits/stdc++.h>

using namespace std;

int main () {
    
    long long n, m, T, tile[101][101][101], c1=0, c2=0;
    bool pode = false;
    
    cin >> T;
    for(int t = 0; t< T; t++){
        cin >> n >> m;
        pode = false;
        c1=0; c2=0;
        for (int N = 0; N < n; N++) {
            for (int i = 0; i < 2; i++) {
                for (int j = 0; j < 2; j++) {
                    cin >> tile[N][i][j];
                }
            }
        }
        
        for (int N = 0; N < n && !pode; N ++) {
            for(int M = N; M < n && !pode; M++) {
                if (tile[N][0][1] == tile[M][1][0] && tile[N][1][0] == tile[M][0][1] && tile[N][0][0] == tile[M][0][0] && tile[N][1][1] == tile[M][1][1])
                    pode = true;
            }
        }
        
        if (m % 2 == 1)
            pode = false;
        if(pode)
            cout << "YES\n";
        else
            cout << "NO\n";
    }
    
}

#include<bits/stdc++.h>

using namespace std;

// r 3
// t 10
// c 19
// d 90

desisti. Irei retentar amanhã!!

int dp[100][100];

int menor (int m[100][100], int n, int l, int c, int tam) {
    int p=0, r1=100000, r2=100000;
    
    if (n == tam) {
        if (dp[l][0] != 0) return dp[l][0];
        for(int i=0; i<tam; i++) {
            p+=m[l][i];
        }
        dp[l][0] = p;
        return p;
    }
    
    else if (n == 1) { 
        for (int i=0; i<tam; i++) {
            r2 = m[l][i] + menor(m, n+1, l+1, i, tam);
            dp[l][i] = r2;
         
            if (r2 < r1) {
                r1 = r2;
            }
        }
        return r1;
    } 
    
    else {
        int ini;
        if (c-1 >= 0) 
            ini = c - 1;
        else
            ini = c;
        
        for(int i=ini; i<tam-n+1; i++) {
            p = 0;
            if (dp[l][i] != 0) {
                r2 = dp[l][i];
            } else {
                for (int j = i; j<i+n && j<tam; j++) {
                    p += m[l][j];
                }
                r2 = p + menor(m, n+1, l+1, i, tam);
                dp[l][i] = r2;
            }
            if (r2 < r1) r1 = r2;
        } return r1;
    }
    
}

int main () {
    int n;
    cin >> n;
    int m[100][100];
    
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++) {
            cin >> m[i][j];
            dp[i][j] = 0;
        }
    }
    
    cout << menor(m, 1, 0, n, n) << "\n";
        
    
    return 0;
}

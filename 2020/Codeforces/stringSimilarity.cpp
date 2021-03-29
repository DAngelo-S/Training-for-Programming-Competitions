#include<bits/stdc++.h>

using namespace std;

int main () {

    string s, w;
    int t, n, fim, k, c=1;
    
    cin >> t;
    
    for(int i=0; i<t; i++) {
        cin >> n >> s; //4 1110000
        fim = 2*n-1; //8
        w.resize(n, '0');
        for(int j=0; j<n; j++) {
            for(k=0; k<n; k++) {
                if(w[k] == s[j+k]) {
                    c=0;
                }
            }
            if (c == 1) {
                w[j] = s[j];
            }
            c = 1;
        }
        
        cout << w << endl;
        w.resize(0);

    }

    return 0;
}

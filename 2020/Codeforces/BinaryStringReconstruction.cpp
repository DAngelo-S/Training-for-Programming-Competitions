#include<bits/stdc++.h>

using namespace std;

int main () {

    long long n, x, t, tam;
    string w, s;
    
    cin >> t;
    
    for(long long indt=0; indt<t; indt++) {
        
        cin >> s >> x;
        
        tam = s.size();
        
        w.resize(tam, '2');
        
        for(int i=0; i<tam; i++) {
            
            if(s[i] == '1' && i-x >= 0) {
                if (w[i-x] != '2' && w[i-x] != '1') tam=-1;
                w[i-x] = '1';
            }
            
            if(s[i] == '1' && i+x < tam) {
                if (w[i+x] != '2' && w[i+x] != '1') tam=-1;
                w[i+x] = '1';
            } 
            
            if (s[i] == '0' && i-x>=0) {
                if ( w[i-x] == '2')
                     w[i-x] = '0';
                else if (w[i-x] == '1')
                    tam = -1;
            } 
            
            if (s[i] == '0' && i+x<tam) {
                if (w[i+x] == '2')
                    w[i+x] = '0';
                else if (w[i+x] == '1')
                    tam = -1;
            }
            
        }
        
        for(int i=0; i<tam; i++) if(w[i] == '2') tam=-1;
        
        if (tam == -1)
            cout << -1 << endl;
        else 
            cout << w << endl;
        
        w.resize(0);
    }

    return 0;
}

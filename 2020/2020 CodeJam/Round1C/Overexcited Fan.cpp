#include<bits/stdc++.h>
#include<string.h>

using namespace std;

int mod (int n) {
    if (n < 0)
        return -n;
    else
        return n;
}

int main () {
    
    long long T=1, x=4, y=4, i, c=0, menor=1001;
    string M;
    
    cin >> T;
    
    for(int t=0; t<T; t++) {
        
        cin >> x >> y >> M;
        
        for(i=0; i<M.length(); i++) {
            if(M[i] == 'S') {
                y--;
            } else if (M[i] == 'N') {
                y++;
            } else if (M[i] == 'E') {
                x++;
            } else if (M[i] == 'W') {
                x--;
            }
            c = mod(x)+mod(y);
            if (c <= i+1) {
                menor = i+1;
                break;
            }
                
        }
        
        cout << "Case #" << t+1 <<": ";
        if (menor!=1001) {
            cout << menor << "\n";
        } else {
            cout << "IMPOSSIBLE\n";
        }menor = 1001;
        
    }
    
    return 0;
    
}

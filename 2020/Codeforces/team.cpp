#include<bits/stdc++.h>

using namespace std;

//18:31 r
//18:32 t
//18:32 c
//35 d

int main() {
    
    int n;
    
    cin >> n;
    
    int c=0, aux=0, p=0;
    
    for(int i=0; i<n; i++) {
        c = 0;
        for(int j=0; j<3; j++) {
            cin >> aux;
            c+=aux;
        } if (c>=2) {
            p++;
        }
    }
    
    cout << p << "\n";

    return 0;
}

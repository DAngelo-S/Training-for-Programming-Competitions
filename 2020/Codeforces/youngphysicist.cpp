#include <bits/stdc++.h>

using namespace std;

//19:
//r 21
//t 
//c 
//d 
//f 27

int main() {
    
    int n, a, b, c, x=0, y=0, z=0;
    
    cin >> n;
    
    for(int i=0; i<n; i++) {
        cin >> a >> b >> c;
        x+=a;
        y+=b; 
        z+=c;
    }
    
    if (x == y && y == z && z == 0)
        cout << "YES\n";
    else 
        cout << "NO\n";

    return 0;
}

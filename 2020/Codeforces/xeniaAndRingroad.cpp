#include<bits/stdc++.h>

using namespace std;

//inicio: 10
//r 56
//t 01
//c 03
//d 09
//f 11

//sub: 2

//LONG LONG !!

int main() {
    
    long long n, m, p=1, a, t=0;
    
    cin >> n >> m;
    
    for (long long i=0; i<m; i++) {
        cin >> a;
        if (p <=a) {
            t += a-p;
            p = a;
        } else {
            t += n-p+a;
            p = a;
        }
    }
    
    cout << t << "\n";
    
    return 0;
}

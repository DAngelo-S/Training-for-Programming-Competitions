#include <bits/stdc++.h>

using namespace std;

/*
inicio: 10
r: 28
t: 30
c: 34
d: 44
f: 36

submits: 3

a² = n - b
a = m - b²

*/


int main() {
    
    long long n, m;
    long long a, b, c=0;
    
    cin >> n >> m;
    
    //m - b² >= 0
    //-b² >= -m
    //b² <= m
    // 0 <= b <= sqrt(m);
    
    b = sqrt(m);
    
    
    for(long long i=0; i <= b+1; i++) {
        //a² = n - b
        //a = m - b²
        
        a = m - i*i;
        
        if (a*a == n - i && a >= 0) {
            c++;
        }
        
    }
    
    cout << c << "\n";
    
    return 0;
}

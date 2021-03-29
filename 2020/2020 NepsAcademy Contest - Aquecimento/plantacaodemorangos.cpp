#include<bits/stdc++.h>

using namespace std;

// https://neps.academy/contest/216/problem/53
// AC

int main() {

    int a, b, c, d;
    
    cin >> a >> b >> c >> d;
    
    a *= b;
    c *= d;
    
    if (a > c) cout << a << "\n";
    else cout << c << "\n";
    
    return 0;

}

#include<bits/stdc++.h>

using namespace std;

//inicio: 10
//r 04
//t 05
//c 08
//d 11
//f 23

//sub: 1

int main() {
    
    long long n, k;
    
    cin >> n >> k;
    
    if (k <= n/2 && n%2==0) {
        cout << k*2-1 << "\n";
    } else if (k > n/2 && n%2==0) {
        cout << (k-(n/2))*2 << "\n";
    } else if (k<= n/2 + 1) {
        cout << k*2-1 << "\n";
    } else {
        cout << (k-(n/2)-1)*2 << "\n";
    }
    
    return 0;
}

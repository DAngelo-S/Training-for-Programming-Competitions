#include<bits/stdc++.h>

using namespace std;

int main() {
    long long N, a, b, c;
    
    cin >> N >> a >> b >> c;
    cout << (N <= a && N <= b && N <= c ? "S" : "N" ) << endl;
    return 0;
}

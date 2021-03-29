#include<bits/stdc++.h>

using namespace std;

int mod (int n) {
    if (n>=0) return n;
    else return -n;
}

int main() {
    
    int m[5][5], l, c;
    
    for(int i=0; i<5; i++) {
        for(int j=0; j<5; j++) {
            cin >> m[i][j];
            if (m[i][j] == 1) {
                l = i;
                c = j;
            }
        }
    }
    
    cout << mod(l-2) + mod(c-2) << "\n";
    
    return 0;
}

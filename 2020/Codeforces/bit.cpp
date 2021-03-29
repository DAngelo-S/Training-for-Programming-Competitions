#include <bits/stdc++.h>

using namespace std;

//19:
//r 49
//t 51
//c 51
//d 54
//f 54

int pl (string s) {
    for(int i=0; i<3; i++) {
        if (s[i] == '+') return 1;
        if (s[i] == '-') return -1;
    }
    return 0;
}

int main() {
    
    int n, x=0;
    string s;
    
    cin >> n;
    
    for(int i=0; i<n; i++) {
        cin >> s;
        x += pl(s);
    }
    
    cout << x << "\n";
    
    return 0;
}

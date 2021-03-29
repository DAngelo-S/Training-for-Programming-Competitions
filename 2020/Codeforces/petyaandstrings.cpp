#include<bits/stdc++.h>

using namespace std;
//18:
//r 56
//t 57
//c 59
//d 06
//f 08

char low(char c) {
        return (c - 'A' + 'a');
}

int main() {
    
    string s1, s2;
    
    cin >> s1 >> s2;
    
    for(int i=0; i<s1.size(); i++) {
        if (s1[i] < 'a' || s1[i] > 'z')
            s1[i] = low(s1[i]);
        if (s2[i] < 'a' || s2[i] > 'z')
            s2[i] = low(s2[i]);
    }
    
    if (s1<s2) cout << -1 << "\n";
    else if (s1 == s2) cout << 0 << "\n";
    else cout << 1 << "\n";
    
    return 0;
}

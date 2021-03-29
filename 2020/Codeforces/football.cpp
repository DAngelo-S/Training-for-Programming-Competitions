#include <bits/stdc++.h>

using namespace std;

/*
inicio: 10:18
r: 20
t: 20
c: 25
d: 26
f: 26

submits: 1

*/

int main() {
    
    string s;
    char ant='2';
    int c=0;
    bool danger = false;
    
    cin >> s;
    
    for (int i=0; i<s.size(); i++) {
        if (s[i] == ant) {
            c++;
            if ( c == 7 )
                danger = true;
        } else {
            c = 1;
            ant = s[i];
        }
    }
    
    if (danger)
        cout << "YES\n";
    else
        cout << "NO\n";
    
    return 0;
}

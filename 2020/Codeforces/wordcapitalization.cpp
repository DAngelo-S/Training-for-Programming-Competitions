#include <bits/stdc++.h>

using namespace std;

//19:
//r 30
//t 31
//c 31
//d 35
//f 38

char toUpper (char c) {
    return (c - 'a' + 'A');
}

int UpperOrLow (char c) {
    if (c >= 'a' && c <= 'z')
        return -1;
    else
        return 1;
}

int main() {
    
    string s;
    
    cin >> s;
    
    if (UpperOrLow(s[0]) == -1)
        s[0] = toUpper(s[0]);
    
    cout << s << "\n";
    
    return 0;
}

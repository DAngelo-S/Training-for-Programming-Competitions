#include <bits/stdc++.h>

using namespace std;

/*
inicio: 21:32
r: 33
t: 33
c: 38
d: 
f: 38

submits: 1

http://codeforces.com/problemset/problem/58/A

*/

int main() {
    
    string s, h;
    int c=0;
    bool pode = false;
    cin >> s;
    h = "hello";
    
    for(int i=0; i<s.size(); i++){
        if (s[i] == h[c] && c<5)
            c++;
        if (c == 5)
            pode = true;
    }
    
    if (pode)
        printf("YES\n");
    else
        printf("NO\n");
    
    return 0;
}

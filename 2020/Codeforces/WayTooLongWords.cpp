#include <bits/stdc++.h>

using namespace std;

//20:
//r 00
//t 01
//c 01
//d 04
//f 19

/*char toChar (int x) {
    return '0' + x;
}*/

/*string toString (int x) {
    string s;
    int aux;
    if (x < 10)
        s = toChar(x);
    else if (x<100) {
        s = toChar(x/10);
        s += toChar(x%10);
    } else {
        aux = x/100;
        s = toChar(aux);
        s += toChar((x-aux*100)/10);
        s += toChar((x-aux*100)%10);
    }
    return s;
}*/

int main() {
    
    int n;
    string s, resp;
    
    cin >> n;
    
    for(int i=0; i<n; i++) {
        cin >> s;
        if(s.size() > 10) {
            /*resp = s[0];
            resp += to_string(s.size()-2);
            resp += s[s.size()-1];*/
            cout << s[0] << s.size()-2 << s[s.size()-1] << "\n";
        } else {
            cout << s << "\n";
        }
        //cout << resp << "\n";
    }
    
    return 0;
}

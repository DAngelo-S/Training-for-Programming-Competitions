#include<bits/stdc++.h>

using namespace std;

/* r:2
   t:3
   c:26-51 
   d: 51-
   sub: */

int main () {
    long long pos1 = 0, pos2 = 0, duv = 0, dif = 0;
    double prob = 1;
    string s1, s2;
    
    cin >> s1 >> s2;
    
    for(long long i = 0; i < s1.size(); i++) {
        if (s1[i] == '+') pos1++;
        if (s1[i] == '-') pos1--;
        if (s2[i] == '+') pos2++;
        if (s2[i] == '-') pos2--;
        if (s2[i] == '?') duv++;
    }

    if (pos1 == pos2) {
        if (duv % 2 == 0) {
            while (duv > 0) {
                prob *= 0.5;
                duv -= 2;
            }
        } else {
            prob = 0;
        }
    } else {
        dif = pos1 - pos2;
        if (dif < 0) dif = -dif;
        if (dif <= duv) {
            while (dif > 0) {
                prob *= 0.5;
                dif--;
                duv--;
            }
            if (duv % 2 == 0) {
                while (duv > 0) {
                    prob *= 0.5;
                    duv -= 2;
                }
            } else {
                prob = 0;
            }
        } else {
            prob = 0;
        }
    }
    
    cout << setprecision(12) << fixed;
    cout << prob << endl;

    return 0;
}
    
    

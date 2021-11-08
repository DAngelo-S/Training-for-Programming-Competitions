#include<bits/stdc++.h>

using namespace std;

string s;

int main () {
    cin >> s;

    int resp = 0;
    int n = s.length();
    int p;

    for(int i = 0; i < n; i++) {
	for(int K = 1; k < n; k++) {
	    p = i;
	    if (s[p] != 'P') {
		p = (p + K) % n;
		while (s[p] != 'P' && p != i)
		    p = (p + K) % n;
	    }
	    if (s[p] != 'P' && p == i)
	        n++;
	}
    }
}

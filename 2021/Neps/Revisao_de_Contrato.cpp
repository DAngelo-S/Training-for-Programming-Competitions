#include<bits/stdc++.h>

using namespace std;

void run() {
	long long c = 0, i = 0;
	string s;
	char d, resp[102];
	cin >> d >> s;
	while(d != '0') {
		c = i = 0;
		while(i < s.size()) {
			if(s[i] != d) {
				if( !(c == 0 && s[i] == '0') ) 
					resp[c++] = s[i];
			}
			i++;
		}
		if(c == 0)
			resp[c++] = '0';
		resp[c] = '\0';
		cout << resp << endl;
		cin >> d >> s;
	}
}

int main () {
	run();
	return 0;
}

#include<bits/stdc++.h>

using namespace std;

int main () {
	double total = 1, f = 0;
	char L;
	string s;
	bool nova, c = true;

	scanf("%c ", &L);
	getline(cin, s);
	
	for(long long i = 0; i < s.size(); i++) {
		if(nova == true && s[i] == ' ') {
			total++;
			nova = false;
			c = true;
		} else {
			nova = true;
			if(s[i] == L && c) {
				c = false;
				f++;
			}
		}
	}

	cout << setprecision(1) << fixed << f/total*100 << endl;

	return 0;
}

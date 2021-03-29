#include<bits/stdc++.h>

using namespace std;

int main () {
	string s, u;
	int cnt = 0;
	bool ok = 1;
	cin >> s >> u;
	
	for(int i = 0; i < s.size() - u.size() + 1; i++) {
		ok = 1;
		for(int j = 0; j < u.size(); j++) {
			if(s[i+j] == u[j])
				ok = 0;
		}
		cnt += ok;
	}

	cout << cnt << endl;

	return 0;
}

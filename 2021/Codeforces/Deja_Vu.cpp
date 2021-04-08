#include<bits/stdc++.h>

using namespace std;

#define FOR(i, N) for(int(i) = 0; (i) < (N); (i)++)
#define RESET(a, b) memset(a, b, sizeof(a))
#define SORT(v) sort(v.begin(), v.end())

bool palindromo(string a) {
	for(int i = 0; i < a.size(); i++)
		if(a[i] != a[a.size()-1-i])
			return false;
	return true;
}

int main () {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int n;
	bool pode;
	string s, t1, t2;

	cin >> n;

	for(int i = 0; i < n; i++) {
		cin >> s;
		t1 = t2 = "";
		pode = true;
		for(int j = 0; j < s.size(); j++) {
			if(pode && s[j] != 'a') {
				pode = false;
				t1.push_back(s[j]);
				t1.push_back('a');
				t2.push_back('a');
				t2.push_back(s[j]);
			} else {
				t1.push_back(s[j]);
				t2.push_back(s[j]);
			}
		}
		if(!palindromo(t1))
			cout << "YES" << endl << t1 << endl;
		else if (!palindromo(t2))
			cout << "YES" << endl << t2 << endl;
		else
			cout << "NO" << endl;	
	}

	return 0;
}

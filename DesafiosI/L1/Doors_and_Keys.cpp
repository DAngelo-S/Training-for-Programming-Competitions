#include<bits/stdc++.h>

using namespace std;

#define FOR(i, N) for(int(i) = 0; (i) < (N); (i)++)
#define RESET(a, b) memset(a, b, sizeof(a))
#define SORT(v) sort(v.begin(), v.end())

bool canPass (string s) {
	int g=0, b=0, r=0;

	for (auto c : s) {
		if (c == 'r')
			r++;
		else if (c == 'g')
    			g++;
		else if (c == 'b')
			b++;
		else if (c == 'R') {
			r--;
			if (r < 0)
				return false;
		} else if (c == 'B') {
			b--;
			if (b < 0)
				return false;
		} else if (c == 'G') {
			g--;
			if (g < 0)
				return false;
		}
	}
	return true;
}

int main () {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int n;
	string s;

	cin >> n;

	while(n) {
		n--;
		cin >> s;
		cout << (canPass(s) ? "YES" : "NO") << endl;
	}	

	return 0;
}

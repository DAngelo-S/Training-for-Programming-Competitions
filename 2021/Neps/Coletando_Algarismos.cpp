#include <bits/stdc++.h>

using namespace std;

int main () {
	string s;
	long long atual = 0, prox, cnt = 0;

	cin >> s;

	for(long long i = 0; i < s.size(); i++) {
		if(atual + 5 <= 9 && s[i] - '0' >= atual && s[i] - '0' <= atual + 5) {
			cnt += abs(s[i] - '0' - atual);
		} else if ( atual + 5 > 9 && s[i] - '0' >= atual && s[i] - '0' <= 9) {
			cnt += 	abs(s[i] - '0' - atual);
		} else if ( atual + 5 > 9 && s[i] - '0' >= 0 && s[i] - '0' <= atual + 5 -10 ) {
			cnt += abs(9 - atual + s[i] - '0' + 1);
		} else if (atual - 5 >= 0 && s[i] - '0' >= atual - 5 && s[i] - '0' <= atual) {
			cnt += abs(atual - s[i] + '0');
		} else if (atual - 5 < 0 && s[i] - '0' <= atual && s[i] - '0' >= 0) {
			cnt += abs(s[i] - '0' - atual);
		} else {
			cnt += abs(atual + 9 - s[i] + '0' + 1);
		}
		atual = s[i] - '0';
	}

	cout << cnt << endl;
	return 0;
}

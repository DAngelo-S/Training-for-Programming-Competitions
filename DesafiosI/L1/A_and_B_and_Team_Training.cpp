#include<bits/stdc++.h>

using namespace std;

#define FOR(i, N) for(int(i) = 0; (i) < (N); (i)++)
#define RESET(a, b) memset(a, b, sizeof(a))
#define SORT(v) sort(v.begin(), v.end())

int main () {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int n, m, t = 0;
	cin >> n >> m;

	while ((n >= 1 && m >= 2) || (n >= 2 && m >= 1)) {
		if (n > m) {
			n -= 2;
			m -= 1;
			t++;
		} else {
			n -= 1;
			m -= 2;
			t++;
		}
	}

	cout << t << endl;

	return 0;
}

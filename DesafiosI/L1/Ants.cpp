#include<bits/stdc++.h>

using namespace std;

#define FOR(i, N) for(int(i) = 0; (i) < (N); (i)++)
#define RESET(a, b) memset(a, b, sizeof(a))
#define SORT(v) sort(v.begin(), v.end())

int main () {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int t, l, n, tmp, NMAX=0, NMIN=0, m;

	cin >> t;

	while(t--) {
		cin >> l >> n;
		NMAX = NMIN = 0;
		while (n--) {
			cin >> tmp;
			m = (l - tmp > tmp ? l - tmp : tmp);
			if (NMAX < m)
				NMAX = m;
			m = (l - tmp < tmp ? l - tmp : tmp);
			if (NMIN < m)
				NMIN = m;
		}
		cout << NMIN << " " << NMAX << endl;
	}

	return 0;
}

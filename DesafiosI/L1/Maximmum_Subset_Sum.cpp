#include<bits/stdc++.h>

using namespace std;

#define FOR(i, N) for(int(i) = 0; (i) < (N); (i)++)
#define RESET(a, b) memset(a, b, sizeof(a))
#define SORT(v) sort(v.begin(), v.end())

int main () {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int n, m, tmp, mx, mh;
	cin >> n;

	while(n) {

		n--;
		
		cin >> m;

		mx = mh = 0;

		for (int i = 0; i < m; i++) {
			cin >> tmp;
			mh += tmp;
			if (mx < mh) {
				mx = mh;
			}
			if (mh < 0) {
				mh = 0;
			}
		}

		cout << mx << endl;
			
	}

	return 0;
}

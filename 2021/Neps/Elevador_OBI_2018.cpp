#include<bits/stdc++.h>

using namespace std;

#define FOR(i, N) for(int(i) = 0; (i) < (N); (i)++)
#define RESET(a, b) memset(a, b, sizeof(a))
#define SORT(v) sort(v.begin(), v.end())

int main () {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int n;
	cin >> n;
	vector<int> v(n+1);

	v[0] = 0;
	for(int i = 1; i <= n; i++)
		cin >> v[i];

	SORT(v);

	for(int i = v.size() - 1; i > 0; i--) {
		if(v[i] - v[i-1] > 8) {
			cout << "N" << endl;
			return 0;
		}
	}

	cout << "S" << endl;

	return 0;
}

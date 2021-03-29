#include<bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef vector<ll> vl;
typedef pair<ll, ll> pll;

#define f first;
#define s second;
#define pb push_back;
#define mp(a,b) make_pair((a), (b));

#define FOR(i, N) for(int(i) = 0; (i); (i) < (N); (i)++)
#define RESET(a, b) memset(a, b, sizeof(a))
#define SORT(v) sort(v.begin(), v.end())

int main () {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	priority_queue<pair<int, int>> q;
	int N, L, v[1000], c;
	pair<int, int> tmp;

	RESET(v, 0);

	cin >> N >> L;

	for(int i = 0; i < N; i++)
		q.push(make_pair(0, -i));

	for(int i = 0; i < L; i++) {
		cin >> c;
		tmp = q.top();
		q.pop();
		q.push(make_pair(tmp.first-c, tmp.second));
		v[-tmp.second]++;
	}

	for(int i = 0; i < N; i++)
		cout << i+1 << " " << v[i] << '\n';

	return 0;
}

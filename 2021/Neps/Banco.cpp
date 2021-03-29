#include<bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef vector<ll> vl;
typedef pair<ll, ll> pll;

#define f first;
#define s second;
#define pb push_back;
#define mp make_pair;

#define FOR(i, N) for(int(i) = 0; (i); (i) < (N); (i)++)
#define RESET(a, b) memset(a, b, sizeof(a))
#define SORT(v) sort(v.begin(), v.end())

int main () {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int C, N, cnt = 0, T, D, tmp;
	priority_queue <int> q;

	cin >> C >> N;

	for(int i = 0; i < C; i++)
		q.push(0);

	for(int i = 0; i < N; i++) {
		cin >> T >> D;
		tmp = q.top();
		//cout << tmp << endl;
		q.pop();
		if ( -tmp > T+20 )
			cnt++;
		if(T > -tmp)
			q.push(-T-D);
		else
			q.push(tmp-D);
	}

	cout << cnt << '\n';

	return 0;
}

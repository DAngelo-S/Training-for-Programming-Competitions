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

	ll T, t = 0, N, v[1000], ini, fim;
	vl par, impar;

	cin >> T;

	while(++t <= T) {
		cin >> N;
		for(ll i = 0; i < N; i++) {
			cin >> v[i];
			if(v[i] % 2 == 0)
				par.push_back(v[i]);
			else
				impar.push_back(v[i]);
		}
		ini = 0;
		fim = par.size() - 1;
		sort(par.begin(), par.end());
		sort(impar.begin(), impar.end());
		for(ll i = 0; i < N; i++) {
			if(v[i] % 2 == 0)
				v[i] = par[fim--];
			else
				v[i] = impar[ini++];
		}
		cout << "Case #" << t << ": ";
		for(ll i = 0; i < N; i++)
			cout << v[i] << (i == N-1 ? "\n" : " ");
		par.clear();
		impar.clear();
	}

	return 0;
}

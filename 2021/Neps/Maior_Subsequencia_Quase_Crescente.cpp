#include<bits/stdc++.h>

using namespace std;

#define MAXN 1001
#define INF 1000000001

typedef long long ll;

ll s[MAXN], tab[MAXN][MAXN];

ll lcs_adaptado (ll a, ll b) {
	if(a == -1 || b == -1) return 0;

	if (tab[a][b] >= 0) return tab[a][b];

	if (s[a] <= s[b]) return tab[a][b] = max(1+lcs_adaptado(a-1, a), lcs_adaptado(a-1, b));

	return tab[a][b] = lcs_adaptado(a-1, b);
}

int main() {
	memset(tab, -1, sizeof(tab));
	ll n, best = -1;
	cin >> n;
	for(ll i = 0; i < n; i++)
		cin >> s[i];
	
	for(ll i = 0; i < n; i++)
		best = max(best, lcs_adaptado(i, i));
	
	cout << best << endl;

	return 0;
}

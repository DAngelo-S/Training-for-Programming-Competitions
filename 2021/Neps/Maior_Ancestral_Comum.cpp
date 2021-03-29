#include<bits/stdc++.h>

using namespace std;

typedef long long ll;

#define MAXN 1000

ll s1[MAXN], s2[MAXN], tab[MAXN][MAXN];

/* Longest Commom Subsequence */
ll lcs (ll a, ll b) {
	if(a == -1 || b == -1) return 0;

	if(tab[a][b] >= 0) return tab[a][b];

	if(s1[a] == s2[b]) return tab[a][b] = 1 + lcs(a-1, b-1);

	return tab[a][b] = max(lcs(a-1, b), lcs(a, b-1));
}

int main () {
	memset(tab, -1, sizeof(tab));

	ll m, n;

	cin >> m >> n;

	for(ll i = 0; i < m; i++)
		cin >> s1[i];

	for(ll i = 0; i < n; i++)
		cin >> s2[i];

	ll subsec = lcs(m-1, n-1);

	cout << m-subsec << " " << n-subsec << endl;
	
	return 0;
}

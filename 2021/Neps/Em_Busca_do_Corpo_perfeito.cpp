#include<bits/stdc++.h>

using namespace std;

typedef long long ll;

#define MAXN 2002

ll peso[MAXN], proteina[MAXN], tab[MAXN][MAXN], p, n;

ll mochila(ll carne, ll resta) {
	if(carne >= n || resta <= 0) return tab[carne][resta] = 0;

	if(tab[carne][resta] >= 0) return tab[carne][resta];

	ll come, n_come;

	n_come = mochila(carne+1, resta);

	if(peso[carne] <= resta) {
		come = proteina[carne] + mochila(carne+1, resta-peso[carne]);
		return tab[carne][resta] = max(come, n_come);
	}

	return tab[carne][resta] = n_come;
}

int main () {
	cin >> p >> n;

	memset(tab, -1, sizeof(tab));

	for(ll i = 0; i < n; i++)
		cin >> peso[i] >> proteina[i];

	cout << mochila(0, p) << endl;
}

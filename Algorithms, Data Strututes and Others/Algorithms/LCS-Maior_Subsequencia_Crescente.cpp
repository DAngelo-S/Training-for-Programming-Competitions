#include<bits/stdc++.h>

using namespace std;

typedef long long ll;

#define MAXN 100100

ll s[MAXN], tab[MAXN][MAXN];

ll lcs_adaptado (ll a, ll b) {
	if (a == -1 || b == -1)
		return 0;
	if(tab[a][b] >= 0)
		return tab[a][b];
	if(s[a] < s[b])
		return tab[a][b] = max(1 + lcs_adaptado(a-1, a), lcs_adaptado(a-1, b));
	return tab[a][b] = lcs_adaptado(a-1, b);
}

ll maior_tam_subsequencia_n_decrescente (ll tam) {
	ll maior = -1;
	for(ll i = 0; i < tam; i++)
		maior = max(maior, lcs_adaptado(i,  i));
	return maior;
}

int main () {
	memset(s, -1, sizeof(s));
}

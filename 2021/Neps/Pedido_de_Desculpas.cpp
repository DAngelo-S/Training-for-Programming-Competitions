#include<bits/stdc++.h>

using namespace std;

typedef long long ll;

ll tab[51][1001], C, F, caracteres[51], desculpas[51];

ll mochila (ll frase, ll resta) {
	if(resta <= 0 || frase >= F) return 0;

	if(tab[frase][resta] >= 0) return tab[frase][resta];

	ll usa, n_usa;

	n_usa = mochila(frase+1, resta);

	if (caracteres[frase] <= resta) {
		usa = desculpas[frase] + mochila(frase+1, resta-caracteres[frase]);
		return tab[frase][resta] = max(usa, n_usa);
	}

	return tab[frase][resta] = n_usa;
}

int main () {
	ll cnt = 0;
	cin >> C >> F;
	
	while( C != 0 ) {
		memset(tab, -1, sizeof(tab));
		for(ll i = 0; i < F; i++)
			cin >> caracteres[i] >> desculpas[i];
		cout << "Teste " << ++cnt << endl << mochila(0, C) << endl << endl;
		cin >> C >> F;
	}
}

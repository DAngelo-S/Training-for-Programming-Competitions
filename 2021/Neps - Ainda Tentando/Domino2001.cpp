#include<bits/stdc++.h>

using namespace std;

typedef long long ll;

/* Estudar sobre Eulerian paths e Eulerian cycles */

ll n, qnt[7][7];

bool vazio() {
	for (ll i = 0; i < 7; i++)
		for(ll j = 0; j < 7; j++)
			if(qnt[i][j] > 0)
				return false;
	return true;
}

bool caminho(int i) {
	bool verifica;
	for(ll j = 0; j < 7; j++) {
		if(qnt[i][j] > 0) {
			qnt[i][j]--;
			qnt[j][i]--;
			verifica = caminho(j);
			if(verifica)
				return true;
			qnt[i][j]++;
			qnt[j][i]++;
		}
	}
	return vazio();
}

bool testa() {
	for(ll i = 0; i < 7; i++) 
		if(caminho(i))
			return true;
	return false;
}


int main () {
	ll c = 0, x, y;
	cin >> n;
	while(n) {
		memset(qnt, 0, sizeof(qnt));
		for(ll i = 0; i < n; i++) {
			cin >> x >> y;
			qnt[x][y]++;
			qnt[y][x]++;
		}
		cout << "Teste " << ++c << endl;
		cout << (testa() ? "sim\n\n" : "nao\n\n");
		cin >> n;
	}
	return 0;
}
	

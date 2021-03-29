#include<bits/stdc++.h>

using namespace std;

typedef long long ll;

ll pai[1000000], peso[1000000], pontos[1000000];

ll find (ll x) {
	if(pai[x] == x) return x;
	return pai[x] = find(pai[x]);
}

void join (ll x, ll y) {
	x = find(x);
	y = find(y);

	if(x == y)
		return;

	//pai[x] = y;
	//pontos[y] += pontos[x];
	
	// O esquema de pesos é apenas para otimização

	if(peso[x] < peso[y]) {
		pai[x] = y;
		pontos[y] += pontos[x];
	}

	if(peso[x] > peso[y]) {
		pai[y] = x;
		pontos[x] += pontos[y];
	}

	if(peso[x] == peso[y]) {
		pai[x] = y;
		peso[y]++;
		pontos[y] += pontos[x];
	}
}

int main () {
	ll N, M, Q, A, B, vitorias;

	cin >> N >> M;
	while(N != 0) {
		memset(pontos, 0, sizeof(pontos));
		memset(peso, 0, sizeof(peso));
		vitorias = 0;
		for(ll i = 0 ; i < N; i++) {
			pai[i] = i;
			cin >> pontos[i];
		}
		for(ll i = 0; i < M; i++) {
			cin >> Q >> A >> B;
			if(Q == 1) {
				join(A-1, B-1);
			}
			else {
				if(find(A-1) == find(0)) {
					if(pontos[find(A-1)] > pontos[find(B-1)])
						vitorias++;
				} else if(find(B-1) == find(0)) {
					if(pontos[find(B-1)] > pontos[find(A-1)])
						vitorias++;
				}
			}
		}
		cout << vitorias << endl;
		cin >> N >> M;
	}
}

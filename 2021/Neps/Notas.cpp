#include<bits/stdc++.h>

using namespace std;

int main () {
	int N, aux, maior_qnt = 0, maior_valor = -1, v[201];
	memset(v, 0, sizeof(v));
	cin >> N;
	for(int i = 0; i < N; i++) {
		cin >> aux;
		v[aux]++;
		if(v[aux] > maior_qnt) {
			maior_qnt = v[aux];
			maior_valor = aux;
		} else if (v[aux] == maior_qnt) {
			if(aux > maior_valor)
				maior_valor = aux;
		}
	}
	cout << maior_valor << endl;
	return 0;
}

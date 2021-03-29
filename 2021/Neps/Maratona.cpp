#include<bits/stdc++.h>

using namespace std;

int main () {
	int N, posicao = 0, M, aux, fim = 42195;

	cin >> N >> M;

	for(int i = 0; i < N; i++) {
		cin >> aux;
		if(aux <= posicao)
			posicao = aux + M;
		else
			posicao = -1;
	}

	if(posicao < fim)
		posicao = -1;

	cout << (posicao == -1 ? "N" : "S") << endl;

	return 0;
}

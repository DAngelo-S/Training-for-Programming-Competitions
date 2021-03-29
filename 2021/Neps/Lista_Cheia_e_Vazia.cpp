#include<bits/stdc++.h>

using namespace std;

int main () {
	int pilha = 0, N, M;
	char d;
	cin >> N >> M;
	for(int i = 0; i < M; i++) {
		cin >> d;
		if(d == 'C') {
			if (pilha == N)
				cout << "Lista Cheia" << endl;
			else
				pilha++;
		} else {
			if(pilha == 0)
				cout << "Lista Vazia" << endl;
			else
				pilha--;
		}
	}

	return 0;
}

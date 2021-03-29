#include<bits/stdc++.h>

using namespace std;

int main () {
	int N, aux, resp, teste = 1;

	cin >> N;
	while(N) {
		for(int i = 1; i <= N; i++) {
			cin >> aux;
			if(aux == i)
				resp = i;
		}
		cout << "Teste " << teste++ << endl << resp << endl << endl;
		cin >> N;
	}
	return 0;
}

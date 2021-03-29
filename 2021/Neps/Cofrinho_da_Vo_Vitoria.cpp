#include<bits/stdc++.h>

using namespace std;

int main () {
	int t = 0, N, J = 0, Z = 0, aux;

	cin >> N;
	while(N) {
		cout << "Teste " << ++t << endl;
		for(int i = 0; i < N; i++) {
			cin >> aux;
			J += aux;
			cin >> aux;
			Z += aux;
			cout << J - Z << endl;
		}
		cout << endl;
		cin >> N;
		J = Z = 0;
	}
	return 0;
}

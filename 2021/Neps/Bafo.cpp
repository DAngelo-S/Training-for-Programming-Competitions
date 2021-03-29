#include<bits/stdc++.h>

using namespace std;

int main () {
	int R, A, B, t = 0, aux;

	cin >> R;

	while(R != 0) {
		A = B = 0;
		for(int i = 0; i < R; i++) {
			cin >> aux;
			A += aux;
			cin >> aux;
			B += aux;
		}
		cout << "Teste " << ++t << endl;
		cout << (A > B ? "Aldo" : "Beto") << endl << endl;
		cin >> R;
	}

	return 0;
}

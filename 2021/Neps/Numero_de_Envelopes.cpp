#include<bits/stdc++.h>

using namespace std;

int main () {
	int tipo[1000001], N, T, K, menor = 1000002;

	memset(tipo, 0, sizeof(tipo));
	
	cin >> N >> T;

	for(int i = 0; i < N; i++) {
		cin >> K;
		tipo[K-1]++;
	}

	for(int i = 0; i < T; i++)
		menor = min(menor, tipo[i]);

	cout << menor << endl;
	return 0;
}

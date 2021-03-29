#include<bits/stdc++.h>

using namespace std;

vector<int> v;

int busca (int i, int ini, int fim) {
	if(ini > fim)
		return -1;
	int meio = (ini+fim)/2;
	if(i == v[meio])
		return meio;
	if(i < v[meio])
		return busca(i, ini, meio-1);
	return busca(i, meio+1, fim);
}

int main () {
	int N, K, aux;
	cin >> N;
	for(int i = 0; i < N; i++) {
		cin >> aux;
		v.push_back(aux);
	}
	sort(v.begin(), v.end());
	cin >> K;
	for(int i = 0; i < N - 1; i++) {
		aux = K - v[i];
		aux = busca(aux, 0, N-1);
		if(aux != -1) {
			cout << v[i] << " " << v[aux] << endl;
			return 0;
		}
	}

	return 0;
}

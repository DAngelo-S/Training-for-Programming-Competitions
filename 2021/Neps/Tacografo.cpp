#include<bits/stdc++.h>

using namespace std;

int main () {
	int N, T, V;
	long long soma = 0;
	cin >> N;
	for(int i = 0; i < N; i++) {
		cin >> T >> V;
		soma += abs(T*V);
	}
	cout << soma << endl;
	return 0;
}

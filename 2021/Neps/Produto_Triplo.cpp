#include<bits/stdc++.h>

using namespace std;

int main() {
	bool zero = false;
	long long p, n, v[200001], dir_a, dir_b, dir_c, esq_a, esq_b;
	cin >> n;

	/* 3 positivos (3 maiores possiveis)
	   2 positivos 1 negativo/nulo (3 maiores possiveis)
	   1 positivo 2 negativos (2 menores possiveis * maior num)
	   0 positivos 3 negativos/nulos (os 2 menores numero * maior numero)
	 */

	for(long long i = 0; i < n; i++) {
		cin >> v[i];
		if(v[i] > 0) {
			p++;
		}
	}
	
	dir_a = v[n-1];
	dir_b = v[n-2];
	dir_c = v[n-3];
	esq_a = v[0];
	esq_b = v[1];

	cout << max(dir_a*dir_b*dir_c, esq_a*esq_b*dir_a) << endl;
	return 0;
}


#include<bits/stdc++.h>

using namespace std;

int main () {
	long long N, v[100001], ini, fim, tam;
	bool ok = true;
	cin >> N;
	for(long long i = 0; i < N; i++)
		cin >> v[i];
	ini = 1;
	fim = N-2;
	tam = v[0] + v[N-1];
	while(ini <= fim && ok) {
		if(v[ini] + v[fim] != tam)
			ok = false;
		else {
			ini++;
			fim--;
		}
	}
	cout << (ok ? "S" : "N") << endl;
	return 0;
}

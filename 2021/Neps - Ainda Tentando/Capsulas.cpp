#include<bits/stdc++.h>

using namespace std;

int main() {
	double N, F, dias=1, moedas=0, c[1000];
	
	cin >> N >> F;

	memset(c, 1, sizeof(c));

	for(long long i = 0; i < N; i++) {
		cin >> c[i];
		dias = dias * c[i];
	}

	for(long long i = 0; i < N; i++) {
		moedas += dias/c[i];
	}
	
	moedas -= N;
	dias -= 1;

	cout << ceil(F/(moedas/dias)) << endl;
}

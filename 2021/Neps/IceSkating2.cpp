/*
Inicio: 
Terminou de ler: 
Terminou de pentar sobre: 
Terminou de codar:
Terminou de debuggar: 
Submits:

Desisti: 21h59
Terminei: 22h39 
*/

#include<bits/stdc++.h>
#include<string>

using namespace std;

void grupo (long long * x, long long * y, long long * controle, long long p, long long n) {
	int i = 0;
	controle[p] = 1;
	for(i = 0; i < n; i++) {
		if (controle[i] == 0 && (x[p] == x[i] || y[p] == y[i])) {
			grupo(x, y, controle, i, n);
		}
	}
}

int main() {
	long long n;
	cin >> n;
	long long x[n], y[n], controle[n], groups = 0, i = 0;

	for(i = 0; i < n; i++) {
		cin >> x[i] >> y[i];
		controle[i] = 0;
	}

	for(i = 0; i < n; i++) {
		if(controle[i] == 0) {
			groups++;
			grupo(x, y, controle, i, n);
		}
	}
	
	cout << groups-1 << endl;

	return 0;
}

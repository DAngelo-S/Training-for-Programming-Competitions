/*
Inicio: 
Terminou de ler: 
Terminou de pensar sobre: 
Terminou de codar: 
Terminou de debuggar: 
Submits:  
*/

#include<bits/stdc++.h>
#include<string>

using namespace std;

int caminho(long long v[][1000], long long i, long long j, long long n, long long m) {
	
	if(v[i][j] == 3) return 1;
	
	v[i][j] = 0;
	long long aux = 0;
	
	if(i - 1 >= 0 && (v[i-1][j] == 1 || v[i-1][j] == 3)) {
		aux = caminho(v, i-1, j, n, m);
		if ( aux > 0 )
			return aux + 1;
	}

	if(j - 1 >= 0 && (v[i][j-1] == 1 || v[i][j-1] == 3)) {
		aux = caminho(v, i, j-1, n, m);
		if ( aux > 0 )
			return aux + 1;
	}

	if(i + 1 < n && (v[i+1][j] == 1 || v[i+1][j] == 3)) {
		aux = caminho(v, i+1, j, n, m);
		if ( aux > 0 )
			return aux + 1;
	}

	if(i - 1 < m && (v[i][j+1] == 1 || v[i][j+1] == 3)) {
		aux = caminho(v, i, j+1, n, m);
		if ( aux > 0 )
			return aux + 1;
	}

	return 0;
}

int main() {
	long long n, m, ini_i, ini_j, v[1000][1000];
	cin >> n >> m;
	
	for(long long i = 0; i < n; i++) {
		for(long long j = 0; j < m; j++) {
			cin >> v[i][j];
			if (v[i][j] == 2) {
				ini_i = i;
				ini_j = j;
			}
		}
	}
	
	cout << caminho(v, ini_i, ini_j, n, m) << endl;

	return 0;
}

// a = (b==c?d:a);
// cout << setprecision(12) << fixed;
// vector <int> v;

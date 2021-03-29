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

#define MAXN 100001

using namespace std;

void dfs(long long i, vector<long long> v[MAXN], long long c[MAXN]) {
	 
	if (c[i] > 0) {
		cout << "ERRO" << endl;
		return;
	}

	c[i] += v[i].size();
	
	long long aux;

	for(long long j = 0; j < v[i].size(); j++) {
		aux = v[i][j];
		dfs(aux, v, c);
		c[i] += c[aux];
	}
}

int main() {
	long long n, x, y;
	vector<long long> vizinhos[MAXN];
	long long componentes[MAXN];

	cin >> n;
	for(long long i = 0; i < n; i++) {
		cin >> x >> y;
		vizinhos[y].push_back(x);
		componentes[i] = 0;
	}

	dfs(0, vizinhos, componentes);

	for(long long i = 0; i <= n; i++) {
		x = vizinhos[i].size();
		for(long long j = 0; j < x - 1; j++) {
			if (!(componentes[vizinhos[i][j]] == componentes[vizinhos[i][j+1]])) {
				cout << "mal" << endl;
				return 0;
			}
		}
	}

	cout << "bem" << endl;
	return 0;
}

// getline(cin, str);
// a = (b==c?d:a);
// cout << setprecision(12) << fixed;
// vector <int> v;

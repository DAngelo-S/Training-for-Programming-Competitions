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

#define MAXN 1000

void dfs(long long a, vector<long long> v[MAXN], long long c[MAXN]) {
	c[a] = 1;
	for(long long i = 0; i < v[a].size(); i++) {
		if(c[v[a][i]] == 0)
			dfs(v[a][i], v, c);
	}
}

int main() {
	long long c[MAXN];
	vector<long long> v[MAXN];
	long long n, m, i, j, grupos;

	cin >> n >> m;

	for(long long a = 0; a < n; a++)
			c[a] = 0;

	for(long long a = 0; a < m; a++) {
		cin >> i >> j;
		v[i-1].push_back(j-1);
		v[j-1].push_back(i-1);
	}

	for(long long a = 0; a < n; a++) {
		if(c[a] == 0) {
			grupos++;
			dfs(a, v, c);
		}
	}
	
	cout << grupos << endl;

	return 0;
}

// getline(cin, str);
// a = (b==c?d:a);
// cout << setprecision(12) << fixed;
// vector <int> v;

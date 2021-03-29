#include<bits/stdc++.h>

using namespace std;

#define MAXN 12000000

bool composto[MAXN];
vector<long long> primo;

void crivo() {
	long long c = 0, pos;
	for(long long i = 2; i < MAXN; i++) {
		if(!composto[i]) {
			primo.push_back(i);
			for(long long j = i*i; j < MAXN; j+=i) {
				composto[j] = 1;
			}
		}
	}
}

long long busca (long long n, long long ini, long long fim) {
	if(ini > fim) return -1;
	long long meio = ini+fim;
	meio = meio/2;
	if(primo[meio] == n) return meio;
	if(n < primo[meio]) return busca(n, ini, meio-1);
	return busca(n, meio+1, fim);
}

int main() {
	long long q, n;
	memset(composto, 0, sizeof(composto));
	crivo();
	cin >> q;
	for(long long i = 0; i < q; i++) {
		cin >> n;
		cout << busca(n, 0, primo.size()-1)+1 << endl;
	}
	return 0;
}

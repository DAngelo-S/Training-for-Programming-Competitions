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

long long qnt[7], nota[] = {2, 5, 10, 20, 50, 100}, tab[5001][7];

long long dp (long long resta, long long tipo = 0) {

	if(resta == 0) return 1;
	
	if(resta < 0 || tipo > 6) return 0;

	if (tab[resta][tipo] >= 0) return tab[resta][tipo];

	long long total = 0;

	for(int i = 0; i <= qnt[tipo]; i++) {
		if(resta < i*nota[tipo]) break;
		total += dp(resta-i*nota[tipo], tipo+1);
	}
	
	return tab[resta][tipo] = total;
}

int main() {
	long long N, cnt = 0;
	cin >> N;

	qnt[0] = 0;

	memset(tab, -1, sizeof(tab));

	for(long long i = 0; i < 6; i++) {
		cin >> qnt[i];
	}

	cout << dp(N) << endl;
	
	return 0;
}

// int v[N][M];
// memset(v, 0, sizeof(v));
// getline(cin, str);
// a = (b==c?d:a);
// cout << setprecision(12) << fixed;
// vector <int> v;

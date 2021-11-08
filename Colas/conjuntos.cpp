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

int main() {
	long long n = 0, m = 0, x = 0, cnt = 0;
	set<long long> a, b;

	cin >> n >> m;

	for(long long i = 0; i < n; i++) {
		cin >> x;
		a.insert(x);
	}

	for(long long i = 0; i < m; i++) {
		cin >> x;
		b.insert(x);
	}

	for(set<long long>::iterator it = a.begin(); it != a.end(); ++it) {
		if(b.find(*it) == b.end()) {
			for(set<long long>::iterator ti = b.begin(); ti != b.end(); ++ti) {
				if(a.find(*ti) == a.end()) {
						a.insert(*ti);
						b.insert(*it);
						cnt++;
						break;
				}
			}
		}
	}

	cout << cnt << endl;

	/* Pra remover:
	   a.erase(it);
	   
	   Para contar quantas vezes o elemento x aparece:
	   a,count(x);
	   Obs.: Como em um conjunto cada elemento só aparece no max uma vez,
	   o retorno desta função sera 0, caso o elemento n esteja no conjunto,
	   ou 1, caso esteja.

	   Vazio?
	   if(a.empty())

	   Tamanho
	   a.size()

	   Esvaziar
	   a.clear()
	*/

	return 0;
}

// getline(cin, str);
// a = (b==c?d:a);
// cout << setprecision(12) << fixed;
// vector <int> v;

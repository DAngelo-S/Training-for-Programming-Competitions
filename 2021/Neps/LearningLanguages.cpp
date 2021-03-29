/*
Inicio: 00h40
Terminou de ler: 00h42  
Terminou de pensar sobre: 00h50
Terminou de codar: 01h18 
Terminou de debuggar: 01h24
Submits: 2
*/

#include<bits/stdc++.h>
#include<string>

using namespace std;

void grupo (int * controle, vector<int> * v, int p, int n) {
	int i = 0, j = 0, k = 0;
	//cout << p << " ";
	controle[p] = 1;
	for(i = 0; i < v[p].size(); i++) {
		for(j = 0; j < n; j++) {
			for(k = 0; controle[j] == 0 && k < v[j].size(); k++) {
				if(v[p][i] == v[j][k])
					grupo(controle, v, j, n);
			}
		}
	}
}

int main() {
	int i, j, n, m, qnt, x, grupos = 0, zerinhos = 0, nNulo = 0;
	cin >> n >> m;
	vector<int> v[n];
	int controle[n];

	for(i = 0; i < n; i++){
		cin >> qnt;
		for(j = 0; j < qnt; j++) {
			cin >> x;
			if (x == 0)
				zerinhos++;
			else
				nNulo = 1;
			v[i].push_back(x-1);
		}
		controle[i] = 0;
	}
	for(i = 0; i < n; i++) {
		if(controle[i] == 0) {
			grupos++;
			//cout << "Grupo: ";
			grupo(controle, v, i, n);
			//cout << endl;
		}
	}
	
	cout << grupos-nNulo+zerinhos << endl;

	return 0;
}

// a = (b==c?d:a);
// cout << setprecision(12) << fixed;
// vector <int> v;
// v.push_back(num);

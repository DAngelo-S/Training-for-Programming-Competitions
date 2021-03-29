/*
Inicio: 22h47
Terminou de ler: 22h49
Terminou de pentar sobre: 22h50
Terminou de codar: 23h02
Terminou de debuggar: 00h16 
Submits: 4
*/

#include<bits/stdc++.h>
#include<string>

using namespace std;

int main() {
	int n, v[3], rest1, rest2, i, j, k, l;
	cin >> n >> v[0] >> v[1] >> v[2];
	sort(v, v+3);
	
	rest1 = n/v[0];

	for(l = rest1; l > 0; l--) {
		for(i = l; i >= 0; i--) {
			rest2 = (n-i*v[0])/v[1];
			for(j = (l-i > rest2 ? rest2 : l-i); j >= 0; j--) {
				k = l-i-j;
				if(i*v[0] + j*v[1] + k*v[2] == n) {
					cout << i + j + k << endl;
					return 0;
				}
			}
		}
	}

	cout << i + j + k << endl;
	// a = (b==c?d:a);
	// cout << setprecision(12) << fixed;

	return 0;
}

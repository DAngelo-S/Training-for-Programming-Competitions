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
	long long n = 0, tam = 0, i = 0;
	char c[10000];
	string s;

	cin >> n;

	for(i = 0; i <= n; i++) {
		getline(cin, s);
		for(int j = 0; j < s.size(); j++) {
			if(s[j] == '{') {
				c[tam++] = '{';
			}
			else if(s[j] == '}') {
				if (tam-1 < 0 || c[--tam] != '{') {
					cout << "N" << endl;
					return 0;
				}
			}
		}
	}
	
	if (tam == 0)
		cout << "S" << endl;
	else
		cout << "N" << endl;
	return 0;
}

// getline(cin, s);
// a = (b==c?d:a);
// cout << setprecision(12) << fixed;
// vector <int> v;

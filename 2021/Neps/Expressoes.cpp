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

#define MAXN 100000

bool abre(char c) {
	if(c == '(' || c == '{' || c == '[')
		return true;
	return false;
}

bool fecha(char ant, char prox) {
	if (ant == '(' && prox == ')') return true;
	if (ant == '[' && prox == ']') return true;
	if (ant == '{' && prox == '}') return true;
	return false;
}

bool pode(string s) {
	char pilha[MAXN];
	long long tam = 0;

	for(long long i = 0; i < s.size(); i++) {
		if(abre(s[i])){
			pilha[tam++] = s[i];
		}
		else if (tam == 0 || !fecha(pilha[--tam], s[i])) {
			return false;
		}
	}

	if (tam > 0)
		return false;
	return true;
}

int main() {
	long long n;
	string s;
	
	cin >> n;

	for(long long i = 0; i < n; i++) {
		cin >> s;
	
		if(pode(s))
			cout << "S" << endl;
		else
			cout << "N" << endl;
	}

	return 0;
}

// getline(cin, str);
// a = (b==c?d:a);
// cout << setprecision(12) << fixed;
// vector <int> v;

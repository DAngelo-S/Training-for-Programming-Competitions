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

typedef struct {
	string nome;
	long long h;
} pessoa;

bool compare (pessoa a, pessoa b) {
	return (a.h > b.h);
}

string copiaString (string s) {
	char c[5000];
	int i = 0;
	for(i = 0; i < s.size(); i++) 
		c[i] = s[i];
	c[i] = '\0';
	return c;
}

int main() {
	long long N, T, c;
	pessoa p[10000];
	string s[5000];

	cin >> N >> T;

	for(long long i = 0; i < N; i++) {
		cin >> p[i].nome >> p[i].h;
	}

	sort(p, p+N, compare);

	for(long long i = 0; i < T; i++) {
		cout << "Time " << i + 1 << endl;
		c = 0;
		for(long long j = i; j < N; j+=T) {
			s[c++] = copiaString(p[j].nome);
		}
		sort(s, s+c);
		for(long long j = 0; j < c; j++) {
			cout << s[j] << endl;
		}
		cout << endl;
	}
	
	return 0;
}

// a = (b==c?d:a);
// cout << setprecision(12) << fixed;
// vector <int> v;

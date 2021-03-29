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

bool verifica(long long n) {
	int c;
	for(long long i = 2; i*i < n && i != n; i++) {
		if(n % i == 0)
			c++;
		if(c == 2)
			return true;
	}
	return false;
}

int main() {
	long long n;

	cin >> n;
	cout << (verifica(n)?"S":"N") << endl;
	
	return 0;
}

// getline(cin, str);
// a = (b==c?d:a);
// cout << setprecision(12) << fixed;
// vector <int> v;

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

char numero(char c) {

	if ( (c >= 'A' && c <= 'C') || (c >= 'a' && c <= 'c') )
		return '2';
	if ( (c >= 'D' && c <= 'F') || (c >= 'd' && c <= 'f') )
		return '3';
	if ( (c >= 'G' && c <= 'I') || (c >= 'g' && c <= 'i') )
		return '4';
	if ( (c >= 'J' && c <= 'L') || (c >= 'j' && c <= 'l') )
		return '5';
	if ( (c >= 'M' && c <= 'O') || (c >= 'm' && c <= 'o') )
		return '6';
	if ( (c >= 'P' && c <= 'S') || (c >= 'p' && c <= 's') )
		return '7';
	if ( (c >= 'T' && c <= 'V') || (c >= 't' && c <= 'v') )
		return '8';
	if ( (c >= 'W' && c <= 'Z') || (c >= 'w' && c <= 'z') )
		return '9';
	return c;

}

int main() {
	string s;

	cin >> s;

	for(long long i = 0; i < s.size(); i++)
		cout << numero(s[i]);
	cout << endl;
	
	return 0;
}

// getline(cin, str);
// a = (b==c?d:a);
// cout << setprecision(12) << fixed;
// vector <int> v;

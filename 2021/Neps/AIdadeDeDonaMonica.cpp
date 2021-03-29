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
	long long m, v[3];

	cin >> m >> v[0] >> v[1];

	v[2] = m - v[0] - v[1];

	sort(v, v+3);

	cout << v[2] << endl;
	
	return 0;
}

// a = (b==c?d:a);
// cout << setprecision(12) << fixed;
// vector <int> v;

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
	set<long long> v;
	
	for(long long i = 0; i < 5; i++)
		v.insert(100-i);

	for(set<long long>::iterator it = v.begin(); it != v.end(); ++it)
		cout << *it << endl;
	
	return 0;
}

// getline(cin, str);
// a = (b==c?d:a);
// cout << setprecision(12) << fixed;
// vector <int> v;

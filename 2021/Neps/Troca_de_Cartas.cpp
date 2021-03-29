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
	set<long long> a, b, total;

	cin >> n >> m;

	for(long long i = 0; i < n; i++) {
		cin >> x;
		a.insert(x);
		total.insert(x);
	}

	for(long long i = 0; i < m; i++) {
		cin >> x;
		b.insert(x);
		total.insert(x);
	}

	for(set<long long>::iterator it = total.begin(); it != total.end(); ++it) {
		if(a.count(*it) && b.count(*it)) {
			a.erase(*it);
			b.erase(*it);
		}
	}

	cout << min(a.size(), b.size()) << endl;
	
	return 0;
}

// getline(cin, str);
// a = (b==c?d:a);
// cout << setprecision(12) << fixed;
// vector <int> v;

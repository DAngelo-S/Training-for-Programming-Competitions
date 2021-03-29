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
	char v[] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '};
	int i, x, y, c = 0;

	for(i = 0; i < 15; i++) {
		cin >> x >> y;
		if( x > y ) {
			v[16+i] = v[c];
			c += 2;
		} else {
			c++;
			v[16+i] = v[c++];
		}
	}

	cout << v[30] << endl;
	
	return 0;
}

// a = (b==c?d:a);
// cout << setprecision(12) << fixed;
// vector <int> v;

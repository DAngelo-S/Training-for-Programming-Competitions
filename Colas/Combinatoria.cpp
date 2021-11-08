/*
Inicio: 06h38
Terminou de ler: 40
Terminou de pentar sobre: 4 dias
Terminou de codar: 5 min
Terminou de debuggar: 17h31-
Submits:
*/

#include<bits/stdc++.h>
#include<string>

using namespace std;

double comb (long long n, long long p) {
	/* n! / (p! (n-p)!) */
	double aux = 1;

	if (n-p >= p) {
		p = n-p;
	}
	
	while ( n > p ) {
		aux *= n;
		if ( n - p > 1 )
			aux /= n - p;
		n--;
	}

	return aux;
}

int main() {

	cout << comb(10, 6) << endl;

	return 0;
}

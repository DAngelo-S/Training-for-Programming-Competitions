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
	long long i = 0, n = 0, posFinal = 0, dif = 0, atual = 0, adc = 0, possibilidades = 0;
	string s1, s2;
	double prob;

	cin >> s1 >> s2;
	for(i = 0; i < s1.size(); i++)
		posFinal += (s1[i]=='+'?1:-1);
	for(i = 0; i < s2.size(); i++) {
		if(s2[i] == '?')
			n++;
		else
			atual += (s2[i]=='+'?1:-1);
	}

	dif = abs(posFinal - atual);
	
	if (dif > n || (dif+n) % 2 != 0)
		prob = 0;
	else {
		possibilidades = pow(2, n);
		adc = dif + (n-dif)/2;	
		prob = comb(n, adc)/possibilidades;
	}

	cout << setprecision(12) << fixed;
	cout << prob << endl;

	return 0;
}

#include<bits/stdc++.h>

using namespace std;

int main () {
	long long V, P, div, mod;
	double v, p;
	cin >> V >> P;
	v = V;
	p = P;
	div = ceil(v/p);
	mod = V % P;
	P -= mod;
	for(long long i = 0; i < mod; i++) {
		cout << div << endl;
		//cout << mod << endl;
	} for(long long i = 0; i < P; i++) {
		cout << (mod == 0 ? div : div - 1) << endl;
		//cout << P << endl;
	}

	return 0;
}

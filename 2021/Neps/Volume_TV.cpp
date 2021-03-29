#include<bits/stdc++.h>

using namespace std;

int main () {
	long long V, aux, T;
	cin >> V >> T;
	for(long long i = 0; i < T; i++) {
		cin >> aux;
		V += aux;
		if(V < 0)
			V = 0;
		if(V > 100)
			V = 100;
	}
	cout << V << endl;
	return 0;
}

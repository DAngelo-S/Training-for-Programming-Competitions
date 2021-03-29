#include<bits/stdc++.h>

using namespace std;

int main () {
	int N, aux, x;
	cin >> N;
	aux = N*(1+N)/2;
	for(int i = 0; i < N - 1; i++) {
		cin >> x;
		aux -= x;
	}
	cout << aux << endl;
	return 0;
}

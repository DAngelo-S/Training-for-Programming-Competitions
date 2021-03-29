#include<bits/stdc++.h>

using namespace std;

bool cabe(int A, int B, int X, int Y) {
	return ( (A <= X && B <= Y) || (A <= Y && B <= X) );
}

int main () {
	int menor = 40001, A, L, N, X, Y, ident = -2;
	cin >> A >> L >> N;
	for(int i = 0; i < N; i++) {
		cin >> X >> Y;
		if(cabe(A, L, X, Y) && menor > X*Y) {
			menor = X*Y;
			ident = i;
		}
	}

	cout << ident+1 << endl;
	return 0;
}

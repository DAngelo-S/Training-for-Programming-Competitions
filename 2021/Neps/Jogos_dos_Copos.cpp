#include<bits/stdc++.h>

using namespace std;

int main () {
	char l;
	long long ini, mov, N, L[3], tmp;

	cin >> N >> l;

	ini = l - 'A';

	L[ini] = 1;

	for(long long i = 0; i < N; i++) {
		cin >> mov;
		if(mov == 1) {
			tmp = L[0];
			L[0] = L[1];
			L[1] = tmp;
		} else if (mov == 2) {
			tmp = L[1];
			L[1] = L[2];
			L[2] = tmp;
		} else {
			tmp = L[0];
			L[0] = L[2];
			L[2] = tmp;
		}
	}

	if(L[0] == 1)
		cout << 'A';
	else if (L[1] == 1)
		cout << 'B';
	else
		cout << 'C';
	cout << endl;

	return 0;
}

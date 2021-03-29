#include<bits/stdc++.h>

using namespace std;

int main () {
	long long N, f[3], j = 4, aux;
	cin >> N;
	f[0] = 1;
	f[1] = 5;
	f[2] = 50;
	while (f[2] + f[1] - f[0] <= N) {
		j++;
		aux = f[2] + f[1] - f[0];
		f[0] = f[1];
		f[1] = f[2];
		f[2] = aux;
	}
	if(N < 5)
		cout << 1;
	else if (N < 50)
		cout << 2;
	else
		cout << j-1;
	cout << endl;
	return 0;
}

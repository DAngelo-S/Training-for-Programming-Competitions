#include<bits/stdc++.h>

using namespace std;

int main () {
	bool v[100];
	long long aux, cnt = 0;
	memset(v, 0, sizeof(v));
	for(long long i = 0; i < 6; i++) {
		cin >> aux;
		v[aux] = 1;
	}
	for(long long i = 0; i < 6; i++) {
		cin >> aux;
		if(v[aux]) {
			cnt++;
		}
	}
	if(cnt < 3)
		cout << "azar";
	else if (cnt == 3)
		cout << "terno";
	else if (cnt == 4)
		cout << "quadra";
	else if (cnt == 5)
		cout << "quina";
	else
		cout << "sena";
	cout << endl;

	return 0;
}

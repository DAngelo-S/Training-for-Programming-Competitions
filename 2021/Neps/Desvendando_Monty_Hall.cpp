#include<bits/stdc++.h>

using namespace std;

int main () {
	long long N, v, aux;
	cin >> N;
	v = N;
	for(long long i = 0; i < N; i++) {
		cin >> aux;
		if(aux == 1)
			v--;
	}
	cout << v << endl;
	return 0;
}

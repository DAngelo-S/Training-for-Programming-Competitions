#include<bits/stdc++.h>

using namespace std;

int main () {
	long long dias = 0, A, D, S, ini = 0;
	cin >> A >> D >> S;
	while(ini < A) {
		dias++;
		ini += D;
		if( ini < A )
			ini -= S;
	}
	cout << dias << endl;
	return 0;
}

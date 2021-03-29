#include<bits/stdc++.h>

using namespace std;

int main () {
	long long N, a, maior;
	bool ganhou = 1;
	cin >> N;
	cin >> maior;

	for(long long i = 0; i < N - 1; i++) {
		cin >> a;
		if(a > maior)
			ganhou = false;
	}

	cout << (ganhou ? "S" : "N") << endl;

	return 0;
}

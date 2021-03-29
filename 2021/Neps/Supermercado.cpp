#include<bits/stdc++.h>

using namespace std;

int main () {
	long long N;
	double p, g, menor=1001;
	cin >> N;
	for(long long i = 0; i < N; i++) {
		cin >> p >> g;
		menor = min(p / g, menor);
	}

	cout << setprecision(2) << fixed;
	cout << menor*1000 << endl;

	return 0;
}

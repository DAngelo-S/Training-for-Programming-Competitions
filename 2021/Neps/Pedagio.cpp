#include<bits/stdc++.h>

using namespace std;

int main () {
	long long L, D, K, P;
	cin >> L >> P;
	double l, p;
	l = L;
	p = P;
	P = floor(l/p);
	cin >> K >> D;
	cout << L * K + P * D << endl;
	return 0;
}

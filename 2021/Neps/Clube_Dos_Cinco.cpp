#include<bits/stdc++.h>

using namespace std;

int main () {
	long long N, A, B, C, D, E, F, G;
	cin >> N >> A >> B >> C >> D >> E >> F >> G;
	cout << (N - (A + B + C - D - E - F + G) == 0 ? "N" : "S") << endl;
	return 0;
}

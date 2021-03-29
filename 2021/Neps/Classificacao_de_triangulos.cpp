#include<bits/stdc++.h>

using namespace std;

int main () {
	int A, B, C;
	cin >> A >> B >> C;
	if (A < B + C && B < A + C && C < B + A) {
		cout << "S" << endl;
		if (A == B && B == C)
			cout << 3 << endl;
		else if (A == B || A == C || B == C)
			cout << 1 << endl;
		else
			cout << 2 << endl;
	} else
		cout << "N" << endl;
	return 0;
}

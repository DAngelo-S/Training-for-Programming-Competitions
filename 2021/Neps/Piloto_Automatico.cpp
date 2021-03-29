#include<bits/stdc++.h>

using namespace std;

int main () {
	long long A, B, C;
	cin >> A >> B >> C;
	if (B - A < C - B)
		cout << 1;
	else if (B - A == C - B)
		cout << 0;
	else
		cout << -1;
	cout << endl;
	return 0;
}

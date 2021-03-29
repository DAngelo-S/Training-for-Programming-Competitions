#include<bits/stdc++.h>

using namespace std;

int main() {
	long long A, B, C, D;
	cin >> A >> B >> C >> D;

	if( (A != D && C != B) || (A == D && C == B) )
		cout << -1;
	else if (A == D)
		cout << 2;
	else
		cout << 1;
	cout << endl;
	return 0;
}

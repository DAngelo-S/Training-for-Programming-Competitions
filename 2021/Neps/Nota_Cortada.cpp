#include<bits/stdc++.h>

using namespace std;

int main () {
	long long A = 11200, B, T;
	cin >> B >> T;
	B = (B + T) * 35;
	if(B == A/2)
		cout << 0;
	else if(B > A/2)
		cout << 1;
	else
		cout << 2;
	cout << endl;
	return 0;
}

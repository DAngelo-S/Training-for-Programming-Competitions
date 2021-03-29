#include<bits/stdc++.h>

using namespace std;

int main() {
	long long a, b, ab;
	a = b = ab = 0;

	cin >> a >> b >> ab;

	if (a < b)
		cout << 2*(ab+a)+1 << endl;
	else if (a == b)
		cout << 2*(ab+a) << endl;
	else
		cout << 2*(ab+b)+1 << endl;

	return 0;
}

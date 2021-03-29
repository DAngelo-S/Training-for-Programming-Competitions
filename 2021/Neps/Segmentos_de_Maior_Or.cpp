#include<bits/stdc++.h>

using namespace std;

int main() {
	long long a, b = 0, n;
	cin >> n;
	for(long long i = 0; i < n; i++) {
		cin >> a;
		b = b | a;
	}
	cout << b << endl;
	return 0;
}

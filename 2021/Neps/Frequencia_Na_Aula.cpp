#include<bits/stdc++.h>

using namespace std;

int main() {
	long long n, x;
	set<long long> s;
	cin >> n;
	for(long long i = 0; i < n; i++) {
		cin >> x;
		s.insert(x);
	}
	cout << s.size() << endl;
	return 0;
}

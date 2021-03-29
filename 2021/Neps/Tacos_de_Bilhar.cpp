#include<bits/stdc++.h>

using namespace std;

int main () {
	long long fab=0, c = 0, x;
	set<long long>s;
	cin >> c;
	for(long long i = 0; i < c; i++) {
		cin >> x;
		if(s.find(x) == s.end()) {
			s.insert(x);
			fab++;
		} else {
			s.erase(x);
		}
	}
	cout << 2*fab << endl;
	return 0;
}

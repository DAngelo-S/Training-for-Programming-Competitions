#include<bits/stdc++.h>

using namespace std;

int main () {
	long long N;
	cin >> N;
	N = N % 8;
	if(N == 6)
		cout << 1 << endl;
	else if(N == 7)
		cout << 2 << endl;
	else if(N == 0)
		cout << 3 << endl;
	return 0;
}

#include<bits/stdc++.h>

using namespace std;

int main () {
	long long A, B, C;
	cin >> A >> B >> C;
	cout << min(min(A/2, B/3), C/5) << endl;
	return 0;
}

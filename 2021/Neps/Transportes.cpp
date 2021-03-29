#include<bits/stdc++.h>

using namespace std;

int main () {
	double L, M;
	cin >> L >> M;
	cout << ( floor(L*0.3) < M ? 0 : floor(L*0.3)) << endl;
	return 0;
}

#include<bits/stdc++.h>

using namespace std;

int main() {
	float n1, n2, d1, d2, v1, v2;
	cin >> n1 >> d1 >> v1 >> n2 >> d2 >> v2;
	cout << (d1/v1 < d2/v2 ? n1 : n2) << endl;
	return 0;
}

#include<bits/stdc++.h>

using namespace std;

int main () {

	int n, x=0, y=0, z=0, temp;

	cin >> n;

	while (n > 0) {
		cin >> temp;
		x += temp;
		cin >> temp;
		y += temp;
		cin >> temp;
		z += temp;
		n--;
	}

	if (x == y && y == z && z == 0)
		cout << "YES\n";
	else
		cout << "NO\n";

	return 0;
}

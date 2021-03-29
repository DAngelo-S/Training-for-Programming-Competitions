#include<bits/stdc++.h>

using namespace std;

long long corta (double l) {
	if( l < 2 )
		return 1;
	return 4*corta(l/2);
}

int main () {
	double l;
	cin >> l;
	cout << corta(l) << endl;
	return 0;
}

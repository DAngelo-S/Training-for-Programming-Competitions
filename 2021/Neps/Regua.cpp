#include<bits/stdc++.h>

using namespace std;

int main() {
	long long K, X, Y;
	cin >> K >> X >> Y;
	cout << (K <= abs(Y-X) ? "EH SUFICIENTE" : "NAO EH SUFICIENTE") << endl;
	return 0;
}

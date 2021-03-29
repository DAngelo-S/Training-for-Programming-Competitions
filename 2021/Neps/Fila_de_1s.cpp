#include<bits/stdc++.h>

using namespace std;

bool eh_potencia_de_dois (long long n) {
	if (n == 0) return 0;
	return ((n&(n-1)) == 0);
}

int main() {
	unsigned long long n;
	cin >> n;
	cout << (n != 0 && eh_potencia_de_dois(n+1) ? "S" : "N") << endl;
	return 0;
}

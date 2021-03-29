#include<bits/stdc++.h>

using namespace std;

long long extrair_bit_menos_significativo (long n) {
	return n&-n;
}

long long conta_bits(long long n) {
	long long cnt = 0;
	while( n!= 0 ) {
		cnt++;
		n -= extrair_bit_menos_significativo(n);
	}
	return cnt;
}

int main() {
	long long n;
	cin >> n;
	cout << conta_bits(n) << endl;
	return 0;
}

#include<bits/stdc++.h>

using namespace std;

int main () {
	int N, conta = 0;
	cin >> N;
	if(N <= 10) {
		conta = 7;
	} else {
		N -= 10;
		conta = 7;
		if( N <= 20 ) {
			conta += N;
		} else {
			conta += 20;
			N -= 20;
			if (N <= 70) {
				conta += N*2;
			} else {
				conta += 140;
				N -= 70;
				conta += N*5;
			}
		}
	}
	cout << conta << endl;
	return 0;
}

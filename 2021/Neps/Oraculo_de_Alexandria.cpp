#include<bits/stdc++.h>

using namespace std;

long long kfat(long long n, long long k) {
	long long c = 0, resp = 1;
	while(n - c*k >= 1) {
		resp *= n - c * k;
		c++;
	}
	return resp;
}

int main() {
	long long T, N, K, dez;
	string s;
	cin >> T;
	while(T--) {
		cin >> s;
		dez = 1;
		K = N = 0;
		for(long long i = s.size()-1; i >= 0; i--) {
			if(s[i] == '!')
				K++;
			else {
				N += (s[i] - '0') * dez;
				dez *= 10;
			}
		} 
		cout << kfat(N, K) << endl;
	}

	return 0;
}


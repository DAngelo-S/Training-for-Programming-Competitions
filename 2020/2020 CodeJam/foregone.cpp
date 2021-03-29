#include<bits/stdc++.h>

using namespace std;

int main() {

	string N, B; //N="oi" N.size() = 2
	long long T;
	
	cin >> T;
	
	for(int i=0; i<T; i++){
		cin >> N;
		B = N;
		for(int j=0; j<N.size(); j++) {
			if (N[j] == '4') {
				N[j] = '3';
				B[j] = '1';
			} else {
				B[j] = '0';
			}
		}
		cout << "Case #" << (i+1) << ": " << N << " " << B << "\n";
	}
	
	return 0;

}

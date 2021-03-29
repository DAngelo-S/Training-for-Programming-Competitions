#include<bits/stdc++.h>

using namespace std;

int main () {
	int N, M, X, s, menor = 1000000000, resp;
	cin >> N >> M;
	for(int i = 0; i < N; i++) {
		s = 0;
		for(int j = 0; j < M; j++) {
			cin >> X;
			s += X;
		}
		if(s < menor) {
			menor = s;
			resp = i + 1;
		}
	}
	cout << resp << endl;
	return 0;
}


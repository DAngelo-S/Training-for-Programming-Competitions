#include<bits/stdc++.h>

using namespace std;

int main () {
	int v[101];
	memset(v, 0, sizeof(v));
	int N, M, S, P;
	cin >> N >> M;
	for(int i = 0; i < M; i++) {
		cin >> S >> P;
		S--;
		for(int j = 0; S+j*P < N; j++) {
			v[S+j*P] = 1;
		}
		for(int j = 1; S-j*P >= 0; j++) {
			v[S-j*P] = 1;
		}
	}
	for(int i = 0; i < N; i++)
		cout << v[i] << "\n";
	return 0;
}

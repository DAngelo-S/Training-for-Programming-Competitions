#include<bits/stdc++.h>

using namespace std;

int main () {
	bool infectado[1001], tem = 0;
	long long N, M, I, F, cnt = 1, A, v[1001];

	cin >> N >> M >> I >> F;

	memset(infectado, 0, sizeof(infectado));
	infectado[I-1] = 1;

	for(long long i = 0; i < M; i++) {
		tem = 0;
		cin >> A;
		for(long long j = 0; j < A; j++)
			cin >> v[i];
		if(i >= F - 1) {
			for(long long j = 0; j < A; j++) {
				if(infectado[v[j]-1]) {
					tem = 1;
					break;
				}
			}
		}
		if(tem) {
			for(long long j = 0; j < A; j++) {
				if(infectado[v[j]-1])
					continue;
				else {
					cnt++;
					infectado[v[j]-1] = 1;
				}
			}
		}
	}

	cout << cnt << endl;
	return 0;
}			

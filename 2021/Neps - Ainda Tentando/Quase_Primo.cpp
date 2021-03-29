#include<bits/stdc++.h>

using namespace std;

bool composto[1000000001];
long long k[41], K, N;

void primos() {
	for(long long i = 0; i < K; i++) {
		for(long long j = k[i]; j <= N; j += k[i])
			composto[j] = 1;
	}
}

int main () {
	long long cnt = 0;
	cin >> N >> K;
	memset(composto, 0, sizeof(composto));
	for(long long i = 0; i < K; i++)
		cin >> k[i];
	primos();
	for(long long i = 1; i <= N; i++)
		cnt += composto[i];
	cout << N - cnt << endl;
	return 0;
}

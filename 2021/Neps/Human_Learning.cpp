#include<bits/stdc++.h>

using namespace std;

int main () {
	long long soma = 0, fim = 0, K, N, cnt = 0, v[100001], i, j;
	cin >> N >> K;
	for(int i = 0; i < N; i++)
		cin >> v[i];
	sort(v, v+N);
	fim = N - 1;
	for(i = 0; i <= fim; i++) {
		cnt = 1;
		for(j = i; j <= fim-1 && cnt < K; j++) {
			cnt++;
		}
		i = j - 1;
		soma += cnt * v[fim--];
	}
	cout << soma << endl;
	return 0;
}

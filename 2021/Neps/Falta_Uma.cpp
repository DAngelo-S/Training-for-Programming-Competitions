#include<bits/stdc++.h>

using namespace std;

int main () {
	long long qnt[9][9], N, a, f=1;

	scanf("%lld ", &N);

	memset(qnt, 0, sizeof(qnt));

	for(long long i = 2; i <= N; i++)
		f *= i;
	
	for(long long i = 0; i < f - 1; i++) {
		for(long long j = 0; j < N; j++) {
			scanf("%lld", &a);
			qnt[a-1][j]++;
		}
	}

	for(long long i = 0; i < N; i++) {
		for(long long j = 0; j < N; j++) {
			if(qnt[j][i] == f/N-1)
				cout << j+1 << " ";
		}
	}

	cout << endl;

	return 0;
}
	

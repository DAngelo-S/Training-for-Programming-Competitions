#include<bits/stdc++.h>

using namespace std;

int main () {
	int M, N, v[1000][1000], num, soma[1000][1000], media = 0;
	bool teve = false;
	scanf("%d %d", &N, &M);
	//N = M = 1000;

	for(long long i = 0; i < N; i++) {
		num = 0;
		for(long long j = 0; j < M; j++) {
			cin >> v[i][j];
			//v[i][j] = 1000;
			num += v[i][j];
			soma[i][j] = num;
			if(i > 0)
				soma[i][j] += soma[i-1][j];
			media += v[i][j];
		}
	}

	media /= 4;

	long long somaA, somaB, somaC, somaD;

	for(long long i = 0; i < N; i++) {
		for(long long j = 0; j < M; j++) {
			somaA = soma[i][j];
			somaB = soma[N-1][j] - somaA;
			somaC = soma[i][M-1] - somaA;
			somaD = soma[N-1][M-1] - somaA - somaB - somaC;
			if(somaA == somaB && somaC == somaD && somaA == media) {
				teve = true;
				cout << i+1 << " " << j+1 << endl;
			}
		}
	}

	if(!teve)
		cout << -1 << endl;

	return 0;
}


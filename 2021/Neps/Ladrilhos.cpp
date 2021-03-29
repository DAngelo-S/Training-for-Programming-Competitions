#include <bits/stdc++.h>

using namespace std;

long long N, M, v[200][200];

long long busca (long long num, long long i, long long j) {
	if( i < 0 || j < 0 || i >= N || j >= M || v[i][j] != num)
		return 0;
	v[i][j] = -1;
 	return 1 + busca(num, i+1, j) + busca(num, i, j+1) + busca(num, i-1, j) + busca(num, i, j-1);
}

long long menor () {
	long long menor=40000*200+1;
	for(long long i = 0; i < N; i++)
		for(long long j = 0; j < M; j++)
			if(v[i][j] != -1) {
				//cout << v[i][j] << " " << busca(v[i][j], i, j) << endl; 
				menor = min(menor, busca(v[i][j], i, j));
			}
	return menor;
}

int main () {
	cin >> N >> M;
	for(long long i = 0; i < N; i++)
		for(long long j = 0; j < M; j++)
			cin >> v[i][j];

	cout << menor() << endl;
	return 0;
}

#include<bits/stdc++.h>

using namespace std;

long long m[1001][1001], N, M;

void dfs(long long i, long long j) {
	if(i < 0 || j < 0 || i >= N || j >= M || m[i][j] == 0)
		return;

	m[i][j] = 0;
	dfs(i+1, j);
	dfs(i-1, j);
	dfs(i, j-1);
	dfs(i, j+1);
}

int main () {
	long long grupos = 0;
	cin >> N >> M;
	for(long long i = 0; i < N; i++)
		for(long long j = 0; j < M; j++)
			cin >> m[i][j];

	for(long long i = 0; i < N; i++)
		for(long long j = 0; j < M; j++) {
			if(m[i][j] == 1) {
				grupos++;
				dfs(i, j);
			}
		}

	cout << grupos << endl;
	return 0;
}

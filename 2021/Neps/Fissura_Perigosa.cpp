#include<bits/stdc++.h>

using namespace std;

long long F, N;
char m[501][501];
bool visitei[501][501];

void caminho (long long i = 0, long long j = 0) {
	if(i < 0 || j < 0 || i >= N || j >= N || visitei[i][j] == 1 || m[i][j] - '0' > F)
		return;

	visitei[i][j] = 1;

	m[i][j] = '*';

	caminho(i-1, j);
	caminho(i+1, j);
	caminho(i, j-1);
	caminho(i, j+1);

	return;
}

int main () {
	cin >> N >> F;

	memset(visitei, 0, sizeof(visitei));

	for(long long i = 0; i < N; i++)
		for(long long j = 0; j < N; j++)
			cin >> m[i][j];

	caminho();

	for(long long i = 0; i < N; i++) {
		for(long long j = 0; j < N; j++)
			cout << m[i][j];
		cout << endl;
	}

	return 0;
}

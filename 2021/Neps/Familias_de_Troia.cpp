#include<bits/stdc++.h>

using namespace std;

#define MAXN 50000

bool visitei[MAXN];
vector<long long> vizinho[MAXN];

long long dfs (long long i) {
	if(visitei[i])
		return 0;
	
	//cout << i << " ";

	visitei[i] = 1;
	long long lixo;

	for(long long j = 0; j < vizinho[i].size(); j++) {
		dfs(vizinho[i][j]);
	}

	return 1;
}

int main() {
	long long N, M, x, y, grupos = 0;
	cin >> N >> M;

	memset(visitei, 0, sizeof(visitei));

	for(long long i = 0; i < M; i++) {
		cin >> x >> y;
		vizinho[x-1].push_back(y-1);
		vizinho[y-1].push_back(x-1);
		//cout << "OK " << x << " " << y << endl;
	}

	for(long long i = 0; i < N; i++) {
		//cout << i << ": ";
		grupos += dfs(i);
		//cout << endl;
	}

	cout << grupos << endl;
}

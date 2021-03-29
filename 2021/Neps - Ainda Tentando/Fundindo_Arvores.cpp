#include <bits/stdc++.h>

using namespace std;

#define MAXN 10000

bool visitei[MAXN];
long long centro[MAXN];
long long N, M;

long long dfs (int i) {	
	if(visitei[i])
		return 0;

	visitei[i] = 1;

	if(centro[i] == 0)
		return 1;

	return 1 + dfs(centro[i]);
}

int main() {
	long long x, y, z, raizA=0, raizB=0, maiorA=0, maiorB=0;
	cin >> N;

	for(int i = 0; i < N; i++) {
		cin >> x >> y >> z;
		centro[x-1] = z-1;
	}
	
	memset(visitei, 0, sizeof(visitei));
	raizA = dfs(0); //3
	for(int i = 1; i < N; i++)
		maiorA = max(maiorA, dfs(i)); //0
	
	cin >> M;
	for(int i = 0; i < M; i++) {
		cin >> x >> y >> z;
		centro[x-1] = z-1;
	}

	memset(visitei, 0, sizeof(visitei));
	raizB = dfs(0); //1
	for(int i = 1; i < M; i++)
		maiorB = max(maiorB, dfs(i)); //1

	cout << maiorA << " " << maiorB << " " << raizA << " " << raizB << endl;
	cout << N + M - max(min(raizA, maiorB), min(raizB, maiorA))  << endl;

	return 0;
}

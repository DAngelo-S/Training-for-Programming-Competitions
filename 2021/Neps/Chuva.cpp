#include<bits/stdc++.h>

using namespace std;

typedef long long ll;

#define MAXN 501

ll N, M;
char m[MAXN][MAXN];
bool visitei[MAXN][MAXN];

void chove(ll i, ll j) {
	//cout << i << " " << j << endl;
	if(visitei[i][j] || i < 0 || j < 0 || i >= N || j >= M || m[i][j] == '#')
		return;
	
	visitei[i][j] = 1;

	if(m[i][j] == '.')
		m[i][j] = 'o';

	chove(i+1, j);

	if(m[i+1][j] == '#') {
		chove(i, j-1);
		chove(i, j+1);
	}

	return;
}

int main () {
	ll a, b;

	memset(visitei, 0, sizeof(visitei));

	cin >> N >> M;
	for(ll i = 0; i < N; i++)
		for(ll j = 0; j < M; j++) {
			cin >> m[i][j];
			if(m[i][j] == 'o') {
				a = i;
				b = j;
			}
		}

	chove(a, b);

	for(ll i = 0; i < N; i++) {
		for(ll j = 0; j < M; j++)
			cout << m[i][j];
		cout << endl;
	}

	return 0;
}

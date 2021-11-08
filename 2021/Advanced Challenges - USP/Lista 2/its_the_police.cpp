#include<bits/stdc++.h>

using namespace std;

vector<int> v[200001];
bool w[200001];

int main () {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int menor = 0;

	int a, b, N, M;

	cin >> N >> M;

	memset(w, 1, sizeof(w));

	for(int i = 0; i < M; i++) {
		cin >> a >> b;
		a--;
		b--;
		v[a].push_back(b);
		v[b].push_back(a);
	}

	for(int i = 1; i < N; i++) {
		if(v[menor].size() > v[i].size())
			menor = i;
	}

	w[menor] = 0;
	for(int i = 0; i < v[menor].size(); i++) w[v[menor][i]] = 0;

	for(int i = 0; i < N; i++) cout << w[i] << (i == N-1 ? "\n" : " ");

	return 0;
}

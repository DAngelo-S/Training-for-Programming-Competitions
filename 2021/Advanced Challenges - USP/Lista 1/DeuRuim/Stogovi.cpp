#include<bits/stdc++.h>

using namespace std;

vector<int> height, father, stck;
vector<vector<int>> memo;

int LCA(int a, int b) {
	if(height[b] > height[a])
		return LCA(b, a);
	while(height[a] > height[b]) {
		if(memo[a][height[b] - height[a]] != -1)
			a = memo[a][height[b] - height[a]];
		else
			a = father[a];
	if (stck[a] != stck[b]) {
		return LCA(father[a], father[b]);
	}
	return a;
}

void new_stack (int v, int i, char c) {
	if(c == 'a') {
		stck[i] = i;
		father[i] = v;
		height[i] = height[v] + 1;
		memo[i].resize(height[i] + 1, -1);
	} else if (c == 'b') {
		stck[i] = stck[father[v]];
		father[i] = father[father[v]];
		height[i] = height[father[v]];
		return;
	}
	stck[i] = stck[v];
	father[i] = father[v];
	height[i] = height[v];
}

int main () {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int N;
	cin >> N;
	height.resize(N+1, 0);
	father.resize(N+1, 0);
	stck.resize(N+1, 0);
	memo.resize(N+1);

	int v, w;
	char c;

	for(int i = 0; i < N; i++) {
		cin >> c >> v;
		new_stack(v, i+1, c);
		if( c == 'c') {
			cin >> w;
			cout << height[LCA(i+1, w)] << "\n";
		} else if(c == 'b') {
			cout << stck[v] << "\n";
		}
	}

	return 0;
}

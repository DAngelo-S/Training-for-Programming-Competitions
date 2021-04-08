#include<bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef vector<ll> vl;
typedef pair<ll, ll> pll;

#define RESET(a,b) memset(a, b, sizeof(a))
#define INF 0x3f3f3f

vector<vector<int>> node;
vector<bool> visitei(1000001, 0);

int bfs(int s, int g) {
	if(s == g)
		return 0;

	queue<int> q[2];
	int atual = 0;
	q[atual].push(s);
	int dist = 1;

	while(!q[atual].empty()) {
		s = q[atual].front();
		q[atual].pop();

		visitei[s] = 1;
		
		for(int j = 0; j < node[s].size(); j++) {
			if(visitei[node[s][j]])
				continue;
			if(node[s][j] == g)
				return dist;
			q[1-atual].push(node[s][j]);
		}

		if(q[atual].empty()) {
			atual = 1 - atual;
			dist++;
		}
	}

	return INF;
}

int main () {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int f, s, g, u, d;
	vector<int> tmp;

	cin >> f >> s >> g >> u >> d;

	for(int i = 0; i < f; i++) {
		if(i - d >= 0) {
			tmp.push_back(i-d);
		} if(i + u < f) {
			tmp.push_back(i+u);
		}
		node.push_back(tmp);
		tmp.clear();
	}

	int resp = bfs(s-1, g-1);

	if (resp == INF)
		cout << "use the stairs";
	else 
		cout << resp;
	cout << endl;

	return 0;
}

#include<bits/stdc++.h>

using namespace std;

#define FOR(i, N) for(int(i) = 0; (i) < (N); (i)++)
#define RESET(a, b) memset(a, b, sizeof(a))
#define SORT(v) sort(v.begin(), v.end())

#define INF 0x3f3f3f3f

int N, M;
int d[10000];
vector<pair<int, int>> v[100];
bool visited[100];

void dijkstra (int s) {

	RESET(d, INF);
	RESET(visited, false);

	priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>> > q;
	q.push(make_pair(0, s));
	
	d[s] = 0;

	int atual, prox, dist, new_dist, i = 0;

	while(!q.empty()) {

		atual = q.top().second;
		visited[atual] = true;

		dist = d[atual];

		for(int i = 0; i < v[atual].size(); i++) {
			prox  = v[atual][i].first;
			new_dist = v[atual][i].second;

			if (d[prox] > dist + new_dist) {
				d[prox] = dist + new_dist;
				q.push(make_pair(d[prox], prox));
			}
		}

		while(!q.empty() && visited[q.top().second]) {
			q.pop();
		}
	}

	return;
}

int maximo () {
	int m = -INF;
	for(int i = 0; i < N; i++)
		m = max(m, d[i]);
	return m;
}

int main () {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int resp = INF, u, w, p;

	cin >> N >> M;
	
	for(int i = 0; i < M; i++) {
		cin >> u >> w >> p;
		v[u].push_back(make_pair(w, p));
		v[w].push_back(make_pair(u, p));
	}

	for(int i = 0; i < N; i++) {
		dijkstra(i);
		resp = min(resp, maximo());
	}

	cout << resp << endl;

	return 0;
}

#include<bits/stdc++.h>

using namespace std;

#define FOR(i, N) for(int(i) = 0; (i) < (N); (i)++)
#define RESET(a, b) memset(a, b, sizeof(a))
#define SORT(v) sort(v.begin(), v.end())

map<int, bool> visited;

int dfs (vector<int> neib[], int i) {

int cnt = 0;

visited[i] = true;

for (int j = 0; j < neib[i].size(); j++) { 
if (!visited[neib[i][j]]) {
cnt++;
cnt += dfs(neib, neib[i][j]);
}
}

return cnt;
}

int main () {
ios_base::sync_with_stdio(false);
cin.tie(NULL);

int N, M, x, y;
cin >> N >> M;

vector<int> neib[N+1];

for (int i = 1; i <= N; i++)
visited[i] = false;

for (int i = 0; i < M; i++) {
cin >> x >> y;

neib[x].push_back(y);
neib[y].push_back(x);
}

cout << (N == M && N-1==dfs(neib, 1) ? "FHTAGN!" : "NO") << endl;

return 0;
}

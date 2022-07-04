#include<bits/stdc++.h>

using namespace std;

#define FOR(i, N) for(int(i) = 0; (i) < (N); (i)++)
#define RESET(a, b) memset(a, b, sizeof(a))
#define SORT(v) sort(v.begin(), v.end())
int n;
int dfs (int i, vector<int> neib[], bool visited[]) {

visited[i] = true;
int maxn = 0;

for (j = 1; i <= n; i++) {
if (!visited[n] && ) {
maxn = max(maxn, dfs(n, neib, visited));
}
}

return maxn;
}

int main () {
ios_base::sync_with_stdio(false);
cin.tie(NULL);

int t, maxn, n, m, l, x, y;

cin >> t;

while (t--) {
cin >> n >> m >> l;
vector<int> neib[n+1];
bool visited[n+1];

RESET(visited, false);

for (int i = 0; i < m; i++) {
cin >> x >> y;
neib[x].push_back(y);
neib[y].push_back(x);
}

for (int i = 0; i < l; i++) {
cin >> x;
minn = min(minn, dfs(x));
}

cout << minn;
}

return 0;
}

#include<bits/stdc++.h>

using namespace std;

#define FOR(i, N) for(int(i) = 0; (i) < (N); (i)++)
#define RESET(a, b) memset(a, b, sizeof(a))
#define SORT(v) sort(v.begin(), v.end())

int c, r;
char board[1000][1000];

int dfs (int i, int j) {
//cout << 0;
if (i < 0 || i >= c)
return 0;

if (j < 0 || j >= r)
return 0;

if (board[i][j] == '#')
return 0;

board[i][j] = '#';
//cout << endl << i << " " << j << endl;

int maxn = max(dfs(i+1, j), 
max(dfs(i-1, j), 
max(dfs(i, j+1), dfs(i, j-1)))) + 1;

board[i][j] = '.';

return maxn;
}

int main () {
ios_base::sync_with_stdio(false);
cin.tie(NULL);

int t, maxn;

cin >> t;

while (t--) {
cin >> c >> r;
for (int i = 0; i < r; i++)
for (int j = 0; j < c; j++)
cin >> board[i][j];

int maxn = 0;

for (int i = 0; i < c; i++)
for (int j = 0; j < r; j++)
maxn = max(maxn, dfs(i, j));

cout << "Maximum rode length is " << maxn - 1 << endl;
}

return 0;
}

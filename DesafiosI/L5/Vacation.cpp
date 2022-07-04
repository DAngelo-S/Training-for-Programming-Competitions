#include<bits/stdc++.h>

using namespace std;

#define FOR(i, N) for(int(i) = 0; (i) < (N); (i)++)
#define RESET(a, b) memset(a, b, sizeof(a))
#define SORT(v) sort(v.begin(), v.end())

int main () {
ios_base::sync_with_stdio(false);
cin.tie(NULL);

int N;
cin >> N;
int v[3][N], dp[3][N];

RESET(dp, 0);

for (int i = 0; i < N; i++)
for (int j = 0; j < 3; j++)
cin >> v[j][i];

dp[0][0] = v[0][0];
dp[1][0] = v[1][0];
dp[2][0] = v[2][0];

for (int i = 1; i < N; i++) {
dp[0][i] = v[0][i] + max(dp[1][i-1], dp[2][i-1]);
dp[1][i] = v[1][i] + max(dp[0][i-1], dp[2][i-1]);
dp[2][i] = v[2][i] + max(dp[0][i-1], dp[1][i-1]);
}

cout << max(dp[0][N-1], max(dp[1][N-1], dp[2][N-1])) << endl;

return 0;
}

#include<bits/stdc++.h>

using namespace std;

#define FOR(i, N) for(int(i) = 0; (i) < (N); (i)++)
#define RESET(a, b) memset(a, b, sizeof(a))
#define SORT(v) sort(v.begin(), v.end())

int main () {
ios_base::sync_with_stdio(false);
cin.tie(NULL);

long long N, W;
cin >> N >> W;
long long wt[N], val[N], m=2000000000, resp=-1;
vector<long long> dp(m+1, INT_MAX);
dp[0] = 0;

for (int i = 0; i < N; i++) {
cin >> wt[i] >> val[i];
//m += val[i];
}

for (long long i = 0; i < n; i++) {
       for (long long j = m - value[i]; j >= 0; j--) {
       dp[j+value[i]] = min(dp[j+value[i]], dp[j] + wt[i]);
       }
}

for (long long i = 0; i <= m; i++)
if (dp[i] <= w)
resp = max(resp, i);

cout << resp << endl;

return 0;
}

#include<bits/stdc++.h>

using namespace std;

#define FOR(i, N) for(int(i) = 0; (i) < (N); (i)++)
#define RESET(a, b) memset(a, b, sizeof(a))
#define SORT(v) sort(v.begin(), v.end())

int main () {
ios_base::sync_with_stdio(false);
cin.tie(NULL);

int n, m, tmp;
long long total = 0;
cin >> n >> m;
int lin[2][n], col[2][m];
RESET(lin, 0);
RESET(col, 0);

for (int i = 0; i < n; i++) {
for (int j = 0; j < m; j++) {
cin >> tmp;
lin[tmp][i]++;
col[tmp][j]++;
}
}

total = n * m;
for (int i = 0; i < n; i++) {
total += 1 << lin[0][i] - lin[0][i] - 1;
total += 1 << lin[1][i] - lin[1][i] - 1;
}
for (int j = 0; j < m; j++) {
total += 1 << col[0][j] - col[0][j] - 1;
total += 1 << col[1][j] - col[1][j] - 1;
}

cout << total << endl;

return 0;
}

#include<bits/stdc++.h>

using namespace std;

#define FOR(i, N) for(int(i) = 0; (i) < (N); (i)++)
#define RESET(a, b) memset(a, b, sizeof(a))
#define SORT(v) sort(v.begin(), v.end())

int main () {
ios_base::sync_with_stdio(false);
cin.tie(NULL);

int n, k, cnt=0;
cin >> n >> k;
int v[n];
map<int, int> m;

for (int i = 0; i < n; i++) {
cin >> v[i];
m[v[i]] = i;
}

for (int i = 0; i < n; i++) {
if (m.find(v[i] - k) != m.end()) {
cnt++;
}
}

cout << cnt << endl;

return 0;
}

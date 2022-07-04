#include<bits/stdc++.h>

using namespace std;

#define FOR(i, N) for(int(i) = 0; (i) < (N); (i)++)
#define RESET(a, b) memset(a, b, sizeof(a))
#define SORT(v) sort(v.begin(), v.end())

int main () {
ios_base::sync_with_stdio(false);
cin.tie(NULL);

int n, q, i=0, j;

cin >> n;

int v[n+1];
RESET(v, 0);

while (n--) {
cin >> v[++i];
v[i] += v[i-1];
}

cin >> q;

while (q--) {
cin >> i >> j;
cout << v[j+1] - v[i] << endl;
}

return 0;
}

#include<bits/stdc++.h>

using namespace std;

#define FOR(i, N) for(int(i) = 0; (i) < (N); (i)++)
#define RESET(a, b) memset(a, b, sizeof(a))
#define SORT(v) sort(v.begin(), v.end())
#define make_pair mp
#define push_back pb

int main () {
ios_base::sync_with_stdio(false);
cin.tie(NULL);

long long t, n, m, g, l;

cin >> t;

while(t--) {
cin >> g >> l;

if (l % g != 0)
cout << -1 << endl;
else
cout << g << " " << l << endl;
}


return 0;
}

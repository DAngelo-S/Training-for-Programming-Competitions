#include<bits/stdc++.h>

using namespace std;

#define FOR(i, N) for(int(i) = 0; (i) < (N); (i)++)
#define RESET(a, b) memset(a, b, sizeof(a))
#define SORT(v) sort(v.begin(), v.end())

int main () {
ios_base::sync_with_stdio(false);
cin.tie(NULL);

int n, l;
       double d;
cin >> n >> l;
double v[n];

for (int i = 0; i < n; i++) cin >> v[i];

sort(v, v+n);

d = v[0];

for (int i = 0; i < n - 1; i++) {
d = (d > (v[i+1]-v[i])/2 ? d : (v[i+1]-v[i])/2);
}

d = (d > l-v[n-1] ? d : l - v[n-1]);

cout << setprecision(10) << fixed;
cout << d << endl;

return 0;
}

#include<bits/stdc++.h>

using namespace std;

#define FOR(i, N) for(int(i) = 0; (i) < (N); (i)++)
#define RESET(a, b) memset(a, b, sizeof(a))
#define SORT(v) sort(v.begin(), v.end())
set<long long> s;

bool eh_Primo(long long k) {
if (s.find(k) != s.end())
return true;

if (k < 2 || k % 2 == 0)
return false;

for (long long i = 3; i * i <= k; i+=2)
if (k % i == 0)
return false;

s.insert(k);
return true;
}

int main () {
ios_base::sync_with_stdio(false);
cin.tie(NULL);

s.insert(2);

long long t, n, m, ii, jj;
cin >> t;
while (t--) {
cin >> n >> m;
for (int i = n; i <= m; i++) {
if (eh_Primo(i))
cout << i << endl;
}
if (t!=0)
cout << endl;
}

return 0;
}

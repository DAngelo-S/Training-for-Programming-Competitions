#include<bits/stdc++.h>

using namespace std;

#define FOR(i, N) for(int(i) = 0; (i) < (N); (i)++)
#define RESET(a, b) memset(a, b, sizeof(a))
#define SORT(v) sort(v.begin(), v.end())

int main () {
ios_base::sync_with_stdio(false);
cin.tie(NULL);

long long m, n, s, r=0, p;
cin >> m >> n;

while (m>=n) {
s = n;
p = 1;
while (s<<1 <= m) {
s<<=1;
p<<=1;
cout << s << " " << p << " " << m << endl;
}
r+=p;
m-=s;
}

return 0;
}

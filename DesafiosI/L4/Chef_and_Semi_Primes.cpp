#include<bits/stdc++.h>

using namespace std;

#define FOR(i, N) for(int(i) = 0; (i) < (N); (i)++)
#define RESET(a, b) memset(a, b, sizeof(a))
#define SORT(v) sort(v.begin(), v.end())

int main () {
ios_base::sync_with_stdio(false);
cin.tie(NULL);

// Sieve of Erastotenes
// p*p <= n, p = maior primo que compoe n
vector<long long> p;
long long c[201];
RESET(c, 1);
c[0] = c[1] = 0;
for (long long i = 2; i < 201; i++) {
if (c[i]) {
for (long long j = i*i; j < 201; j+=i) {
c[j]=0;
}
p.push_back(i);
}
}

set<long long> s;
for (int i = 0; i < p.size() - 1; i++) {
for (int j = i + 1; j < p.size(); j++) {
s.insert(p[i] * p[j]);
}
}

long long n, x;
bool pode;
cin >> n;
while (n--) {
cin >> x;
pode=false;
for (int i = 2; i < x; i++) {
if (s.find(i) != s.end() && s.find(x-i) != s.end())
pode=true;
}
cout << (pode ? "YES" : "NO") << endl;
}

return 0;
}

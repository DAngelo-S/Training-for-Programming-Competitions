#include<bits/stdc++.h>

using namespace std;

#define FOR(i, N) for(int(i) = 0; (i) < (N); (i)++)
#define RESET(a, b) memset(a, b, sizeof(a))
#define SORT(v) sort(v.begin(), v.end())

vector<long long> p;

bool bb (int i, int f, long long k) {
if (i > f)
return false;

int m = (i+f)/2;

if (p[m] * p[m] == k)
return true;
if (p[m] * p[m] > k)
return bb(i, m-1, k);
return bb(m+1, f, k);
}

int main () {
ios_base::sync_with_stdio(false);
cin.tie(NULL);

// Sieve of Erastotenes
// p*p <= n, p = maior primo que compoe n
long long c[999996];
RESET(c, 1);
for (long long i = 2; i <= 999997; i++) {
if (c[i-2]) {
for (long long j = i*i; j <= 999997; j+=i) {
c[j-2]=0;
}
p.push_back(i);
}
}

long long n, x, pp;
cin >> n;
while (n--) {
cin >> x;
cout << (bb(0, p.size()-1, x) ? "YES" : "NO") << endl;
}

return 0;
}

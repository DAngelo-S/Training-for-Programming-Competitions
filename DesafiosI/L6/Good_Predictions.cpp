#include<bits/stdc++.h>

using namespace std;

#define FOR(i, N) for(int(i) = 0; (i) < (N); (i)++)
#define RESET(a, b) memset(a, b, sizeof(a))
#define SORT(v) sort(v.begin(), v.end())
#define MOD 1000000007

long long fastxp(long long b, long long e) {
if (e == 0)
return 1;
long long resp = fastxp(b, e/2);
resp = resp * resp % MOD;

if (e%2 == 1) resp = resp * b % MOD;

return resp;
}

long long comb(long long n, long long p, long long fat[]) {
long long result;

if (p > n) return 0;

result = fat[n] * fastxp(fat[p], MOD-2) % MOD 
* fastxp(fat[n-p], MOD-2) % MOD;

return result;
}

int main () {
ios_base::sync_with_stdio(false);
cin.tie(NULL);

long long fat[301];
fat[0] = 1;
for (int i = 1; i <=300; i++)
fat[i] = i * fat[i-1] % MOD;

long long N, W, T, R;
long long resp = 0;

cin >> N >> W >> T >> R;

resp = (comb(N, W, fat) * comb(N-W, T, fat)) % MOD;

cout << resp << endl;

return 0;
}

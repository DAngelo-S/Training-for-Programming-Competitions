#include<bits/stdc++.h>

using namespace std;

#define FOR(i, N) for(int(i) = 0; (i) < (N); (i)++)
#define RESET(a, b) memset(a, b, sizeof(a))
#define SORT(v) sort(v.begin(), v.end())

long long bin(long long n, long long k) {
k = max(k, n-k);
long long resp = 1;

for (int i = 0; i < k; i++) {
resp = resp * (n-i) / (i+1);
}

return resp;
}

int main () {
ios_base::sync_with_stdio(false);
cin.tie(NULL);

long long T, N, K;

cin >> T;

while (T--) {
cin >> N >> K;
cout << bin(N, K) << endl;
}

return 0;
}

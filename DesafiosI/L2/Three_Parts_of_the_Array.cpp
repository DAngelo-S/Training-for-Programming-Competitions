#include<bits/stdc++.h>

using namespace std;

#define FOR(i, N) for(int(i) = 0; (i) < (N); (i)++)
#define RESET(a, b) memset(a, b, sizeof(a))
#define SORT(v) sort(v.begin(), v.end())

bool bb(long long v[], int i, int f, long long k) {
if (i > f)
return false;

int m = (i+f)/2;

if (v[m] > k)
return bb(v, i, m-1, k);
else if (v[m] < k)
return bb(v, m+1, f, k);

return true;
}

int main () {
ios_base::sync_with_stdio(false);
cin.tie(NULL);

int n;
cin >> n;
long long total_sum=0, sum1[n], maior=0;
cin >> sum1[0];
for (int i = 1; i < n; i++) {
cin >> sum1[i];
sum1[i] += sum1[i-1];
}
total_sum = sum1[n-1];
for (int i = 0; i < n; i++) {
if (bb(sum1, i, n-1, total_sum - sum1[i])) {
maior = sum1[i];
}
}

cout << maior << endl;

return 0;
}

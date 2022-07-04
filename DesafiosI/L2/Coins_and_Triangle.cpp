#include<bits/stdc++.h>

using namespace std;

#define FOR(i, N) for(int(i) = 0; (i) < (N); (i)++)
#define RESET(a, b) memset(a, b, sizeof(a))
#define SORT(v) sort(v.begin(), v.end())

long long bb (long long k, long long i=0, long long f=44725) {
long long m = (i+f)/2;
long long an = (1+m)*(m)/2;
long long ann = (1+m+1)*(m+1)/2;

if (an > k)
return bb(k, i, m-1);
else if (ann <= k) {
return bb(k, m+1, f);
}
return m;
}

int main () {
ios_base::sync_with_stdio(false);
cin.tie(NULL);

long long t, n;
cin >> t;

while(t--) {
cin >> n;
cout << bb(n) << endl;
}

return 0;
}

#include<bits/stdc++.h>

using namespace std;

#define FOR(i, N) for(int(i) = 0; (i) < (N); (i)++)
#define RESET(a, b) memset(a, b, sizeof(a))
#define SORT(v) sort(v.begin(), v.end())

int main () {
ios_base::sync_with_stdio(false);
cin.tie(NULL);

long long t, a, b, r, bb;
vector<int> v;

cin >> t;
while(t--) {
cin >> a >> b;
r = 1;
while (b--) {
r = (r*a) % 10;
if (v.size() > 0 && v[0] == r) {
b = b % v.size(); // (b-m) % m == b % m
} else {
v.push_back(r);
}
}
cout << r << endl;
v.clear();
}

return 0;
}

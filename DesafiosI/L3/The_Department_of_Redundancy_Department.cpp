#include<bits/stdc++.h>

using namespace std;

#define FOR(i, N) for(int(i) = 0; (i) < (N); (i)++)
#define RESET(a, b) memset(a, b, sizeof(a))
#define SORT(v) sort(v.begin(), v.end())

int main () {
ios_base::sync_with_stdio(false);
cin.tie(NULL);

vector< pair<int, int> > v;
int n, aux=0;
map<int, int> m;

while(cin >> n) {
if (m.find(n) == m.end()) {
m[n] = aux++;
v.push_back(make_pair(n, 1));
} else {
v[m[n]].second++;
}
}

for (auto i : v) {
cout << i.first << " " << i.second << endl; 
}

return 0;
}

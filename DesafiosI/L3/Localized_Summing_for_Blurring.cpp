#include<bits/stdc++.h>

using namespace std;

#define FOR(i, N) for(int(i) = 0; (i) < (N); (i)++)
#define RESET(a, b) memset(a, b, sizeof(a))
#define SORT(v) sort(v.begin(), v.end())

int main () {
ios_base::sync_with_stdio(false);
cin.tie(NULL);

int N, M, aux, s;
char c;
vector< vector<int> > v, m;
vector<int> a;
bool p=false;

while (cin >> N) {
cin >> M;

if (p)
cout << endl;
p = true;

a.push_back(0);

for (int i = 0; i < N; i++) {
v.push_back(a);
for (int j = 1; j <= N; j++) {
cin >> aux;
s += aux;
v[i].push_back(v[i][j-1] + aux);
}
}

a.clear();
s=0;
for (int i = 0; i < N - M + 1; i++) {
m.push_back(a);
for (int j = 0; j < N - M + 1; j++) {
aux = 0;
for (int k = i; k < i + M; k++) {
aux += v[k][j+M] - v[k][j];
}
s += aux;
m[i].push_back(aux);
}
}

v.clear();

for (int i = 0; i < N - M + 1; i++) {
for (int j = 0; j < N - M + 1; j++) {
cout << m[i][j]  << endl;
}
}

cout << s << endl;

m.clear();
}

return 0;
}

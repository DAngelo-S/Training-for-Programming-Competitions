#include<bits/stdc++.h>

using namespace std;

#define FOR(i, N) for(int(i) = 0; (i) < (N); (i)++)
#define RESET(a, b) memset(a, b, sizeof(a))
#define SORT(v) sort(v.begin(), v.end())

int main () {
ios_base::sync_with_stdio(false);
cin.tie(NULL);

string s;
int k=0, i=0, j=0, n, kk=0, maxDist=0;

cin >> n >> k;

cin >> s;

for (int i = 0; i < n && i <= j && j != n; i++) {

while ( kk <= k && j < n) {
if (s[j] == 'a') {
kk++;
}
j++;
if ((j == n && kk <= k) || kk == k) {
maxDist = max(maxDist, j-i);
}
}

if (s[i] == 'a') {
kk--;
}
}

kk=j=0;
for (int i = 0; i < n && i <= j && j != n; i++) {

while ( kk <= k && j < n) {
if (s[j] == 'b') {
kk++;
}
j++;
if ((j == n && kk <= k) || kk == k) {
maxDist = max(maxDist, j-i);
}
}

if (s[i] == 'b') {
kk--;
}
}

cout << maxDist << endl;

return 0;
}

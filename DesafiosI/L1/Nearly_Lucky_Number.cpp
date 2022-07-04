#include<bits/stdc++.h>

using namespace std;

#define FOR(i, N) for(int(i) = 0; (i) < (N); (i)++)
#define RESET(a, b) memset(a, b, sizeof(a))
#define SORT(v) sort(v.begin(), v.end())

int main () {
ios_base::sync_with_stdio(false);
cin.tie(NULL);

string s;
int n = 0;

cin >> s;

for (auto c : s) {
if (c == '4' || c=='7')
n++;
}

if (n == 4 || n == 7)
cout << "YES";
else
cout << "NO";
cout << endl;

return 0;
}

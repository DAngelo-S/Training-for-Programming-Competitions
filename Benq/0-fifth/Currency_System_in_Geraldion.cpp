#include<bits/stdc++.h>

using namespace std;

#define FOR(i, N) for(int(i) = 0; (i) < (N); (i)++)
#define RESET(a, b) memset(a, b, sizeof(a))
#define SORT(v) sort(v.begin(), v.end())

int main () {
ios_base::sync_with_stdio(false);
cin.tie(NULL);

int n, a, resp = 1;

cin >> n;

while (n--) {
cin >> a;
if (a == 1)
resp = -1;
}

cout << resp << endl;

return 0;
}

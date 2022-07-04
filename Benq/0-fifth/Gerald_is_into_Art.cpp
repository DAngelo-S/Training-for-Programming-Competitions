#include<bits/stdc++.h>

using namespace std;

#define FOR(i, N) for(int(i) = 0; (i) < (N); (i)++)
#define RESET(a, b) memset(a, b, sizeof(a))
#define SORT(v) sort(v.begin(), v.end())

int main () {
ios_base::sync_with_stdio(false);
cin.tie(NULL);

int a1, b1, a2, b2, a3, b3;
cin >> a1 >> b1 >> a2 >> b2 >> a3 >> b3;

if ((a1 >= a2 + a3 && b1 >= b2 && b1 >= b3) ||
    (a1 >= b2 + a3 && b1 >= a2 && b1 >= b3) ||
    (a1 >= a2 + b3 && b1 >= b2 && b1 >= a3) ||
    (a1 >= b2 + b3 && b1 >= a2 && b1 >= a3) ||
    (a1 >= a2 && a1 >= a3 && b1 >= b2 + b3) ||
    (a1 >= b2 && a1 >= a3 && b1 >= a2 + b3) ||
    (a1 >= a2 && a1 >= b3 && b1 >= b2 + a3) ||
    (a1 >= b2 && a1 >= b3 && b1 >= a2 + a3))
cout << "YES\n";
else
cout << "NO\n";

return 0;
}

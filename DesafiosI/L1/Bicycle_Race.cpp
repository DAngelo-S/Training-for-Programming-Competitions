#include<bits/stdc++.h>

using namespace std;

#define FOR(i, N) for(int(i) = 0; (i) < (N); (i)++)
#define RESET(a, b) memset(a, b, sizeof(a))
#define SORT(v) sort(v.begin(), v.end())

int main () {
ios_base::sync_with_stdio(false);
cin.tie(NULL);

int n = 0, prev_x, prev_y, x, y, prox_x, prox_y, m;

cin >> m;

cin >> prev_x >> prev_y;
m--;
cin >> x >> y;

while(m--) {
cin >> prox_x >> prox_y;
if (prev_x < x && y < prox_y)
n++;
else if (prev_y > y && x < prox_x)
n++;
else if (prev_x > x && y > prox_y)
n++;
else if (prev_y < y && x > prox_x)
n++;
prev_x = x;
prev_y = y;
x = prox_x;
y = prox_y;
}

cout << n << endl;

return 0;
}

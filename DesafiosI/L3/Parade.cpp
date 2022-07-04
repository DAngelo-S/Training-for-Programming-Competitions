#include<bits/stdc++.h>

using namespace std;

#define FOR(i, N) for(int(i) = 0; (i) < (N); (i)++)
#define RESET(a, b) memset(a, b, sizeof(a))
#define SORT(v) sort(v.begin(), v.end())

int main () {
ios_base::sync_with_stdio(false);
cin.tie(NULL);

stack<int> q;
int t, n, ant, a;

cin >> t;

while(t--) {
cin >> n;
ant = 0;
while (n--) {
cin >> a;
if (a != ant + 1) {
q.push(a);
} else {
ant++;
}

while(!q.empty() && q.top() == ant + 1) {
ant++;
q.pop();
}
}

cout << (q.empty() ? "yes" : "no") << endl;

while(!q.empty()) {
       q.pop();
}       
}

return 0;
}

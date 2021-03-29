#include<bits/stdc++.h>

using namespace std;

typedef long long ll;

ll mdc (ll a, ll b) {
	if(b > a) return mdc(b, a);
	if(b == 0) return a;
	return mdc(b, a % b);
}

int main () {
	ll N, m, x, y;
	cin >> N >> x >> y;
	m = mdc(x, y);
	for(ll i = 2; i < N; i++) {
		cin >> x;
		m = mdc(m, x);
	}
	cout << m << endl;
	return 0;
}

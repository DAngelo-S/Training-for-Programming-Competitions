#include<bits/stdc++.h>

using namespace std;

typedef long long ll;

ll mdc (ll a, ll b) {
	if (b > a) return mdc(b, a);

	if(b == 0) return a;

	return mdc(b, a % b);
}

void frac (ll a, ll b) {
	ll m = mdc(a, b);
	cout << a/m << " " << b/m << endl;
}

int main () {
	ll a, b, c, d;
	cin >> a >> b >> c >> d;
	frac(a*d+c*b, b*d);
	return 0;
}

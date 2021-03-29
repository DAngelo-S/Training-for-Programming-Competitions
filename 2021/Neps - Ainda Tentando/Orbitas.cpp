// https://www.blogcyberini.com/2018/03/algoritmo-para-calcular-o-mmc.html

#include<bits/stdc++.h>

using namespace std;

typedef long long ll;

double mdc(ll a, ll b) {
	if(b > a)
		return mdc(b, a);
	if(b == 0)
		return a;
	return mdc(b, a % b);
}

int main () {
	ll a, b;
	double A, B;
	cin >> a >> b;
	A = a;
	B = b;
	cout << ceil(A*B / mdc(a, b)) << endl;
	return 0;
}

#include<bits/stdc++.h>

using namespace std;

typedef long long ll;

//GCD Greatest Common Divisor
//MDC Máximo Divisor Comum

ll GCD (ll a, ll b) {
	if(a < b)
		return GCD(b, a);
	if(b == 0)
		return a;
	return GCD(b, a%b);
}

//LCM Lowest Common Multiple
//MMC Mínimo Múltiplo Comum

ll LCM (ll a, ll b) {
	return a*b/GCD(a, b);
}

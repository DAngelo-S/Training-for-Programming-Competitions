#include<bits/stdc++.h>

using namespace std;

typedef long long ll;

ll cantake (ll S, ll W, ll CS, ll CW, ll P) {
	if(S > W)
		return cantake(W, S, CW, CS, P);
	return(S * CS >= P ? P/S : CS + min((P - S * CS) / W, CW));
}

void run() {
	ll S, W, CS, CW, P, F;

	cin >> P >> F >> CS >> CW >> S >> W;

	ll best = 0;

	for(ll cs = 0; cs <= CS && cs * S <= P; cs++) {
		ll cw = min((P - cs * S)/W, CW);
		best = max(best, cs + cw + cantake(S, W, CS-cs, CW-cw, F));
	}
	cout << best << endl;
}

int main () {
	ll testes;

	cin >> testes;

	while(testes--)
		run();

	return 0;
}

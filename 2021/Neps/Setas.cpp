#include<bits/stdc++.h>

using namespace std;

typedef long long ll;

int main () {
	ll N, v1 = 0, prox1 = 1, aux;

	cin >> N;

	for(ll i = 0; i < N; i++) {
		cin >> aux;
		if(aux != prox1)
			v1++;
		prox1*=-1;
	}

	cout << min(v1, N-v1) << endl;
	return 0;
}


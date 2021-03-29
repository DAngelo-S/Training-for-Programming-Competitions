#include<bits/stdc++.h>

using namespace std;

typedef long long ll;

#define MAXN 1000

ll X[MAXN], Y[MAXN], N, D, cnt=0;
bool visitei[MAXN];

void dfs (ll i) {

	if(visitei[i])
		return;
	
	cnt++;
	
	visitei[i] = 1;
	
	ll a, b, x, y;
	
	a = X[i];
	b = Y[i];

	for(ll j = 0; j < N; j++) {
		x = X[j];
		y = Y[j];
		if( (a-x)*(a-x) + (b-y)*(b-y) <= D*D ) {
			dfs(j);
		}
	}
}

int main () {
	
	memset(visitei, 0, sizeof(visitei));

	cin >> N >> D;

	for(ll i = 0; i < N; i++)
		cin >> X[i] >> Y[i];

	dfs(0);

	if(cnt == N)
		cout << "S" << endl;
	else
		cout << "N" << endl;

	return 0;
}

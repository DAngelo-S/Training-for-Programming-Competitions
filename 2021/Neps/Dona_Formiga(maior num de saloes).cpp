#include<bits/stdc++.h>

using namespace std;

typedef long long ll;

vector<ll> vizinho[200];
ll tam[200], cnt = 0;
bool visitei[200];

void maior_caminho (ll i) {
	ll maior = 0;
	if(visitei[i])
		return;
	visitei[i] = 1;
	cnt++;
	for(long long j = 0; j < vizinho[i].size(); j++) {	
		maior_caminho(vizinho[i][j]);
	}
	return;
}

int main () {
	ll s, t, p, i, j;
	cin >> s >> t >> p;
	
	memset(visitei, 0, sizeof(visitei));

	for(ll a = 0; a < s; a++)
		cin >> tam[a];
	
	for(ll a = 0; a < t; a++) {
		cin >> i >> j;
		if(tam[i-1] > tam[j-1])
			vizinho[i-1].push_back(j-1);
		if(tam[j-1] > tam[i-1])
			vizinho[j-1].push_back(i-1);
	}
	
	maior_caminho(p-1);

	cout << cnt-1 << endl;

	return 0;
}

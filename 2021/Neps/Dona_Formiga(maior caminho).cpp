#include<bits/stdc++.h>

using namespace std;

typedef long long ll;

vector<ll> vizinho[200];
ll tam[200], dp[200];

long long caminho (ll i, ll p) {
	if(dp[i] != -1)
		return dp[i];
	
	if(tam[i] > tam[p])
		return -1;

	if(i == p)
		return 1;

	ll maior = -1, aux;

	for(long long j = 0; j < vizinho[i].size(); j++) {	
		aux = caminho(vizinho[i][j], p);
		if(aux != -1)
			maior = max(maior, 1 + aux);
	}

	return dp[i] = maior;
}

int main () {
	ll s, t, p, i, j;
	cin >> s >> t >> p;
	
	memset(dp, -1, sizeof(dp));

	pair<long long, long long> menores[200];

	for(ll a = 0; a < s; a++) {
		cin >> tam[a];
		menores[a].first = tam[a];
		menores[a].second = a;
	}

	sort(menores, menores+s);
	
	for(ll a = 0; a < t; a++) {
		cin >> i >> j;
		if(tam[i-1] < tam[j-1])
			vizinho[i-1].push_back(j-1);
		if(tam[j-1] < tam[i-1])
			vizinho[j-1].push_back(i-1);
	}
	
	ll aux;

	for(long long i = 0; i < s && menores[i].second != p-1 && menores[i].first < tam[p-1]; i++) {
		j = i + 1;
		aux = caminho(i, p-1);
		while(j < s && menores[j].second == menores[i].second) {
			aux = max(aux, caminho(j, p-1));
			j++;
		}
		if(aux != -1) {
			cout << aux << endl;
			return 0;
		}
	}

	cout << 0 << endl;
	return 0;
}

#include<bits/stdc++.h>

using namespace std;

typedef long long ll;

int main() {
	ll N, v[101][101], aux;
	cin >> N;
	for(ll i = 0; i < N; i++)
		for(ll j = 0; j < N; j++)
			cin >> v[i][j];
	for(ll i = 0; i < N; i++)
		for(ll j = 0; j < N; j++) {
			cin >> aux;
			v[i][j] += aux;
		}
	for(ll i = 0; i < N; i++) {
		for(ll j = 0; j < N; j++)
			cout << v[i][j] << (j == N-1 ? "" : " ");
		cout << endl;
	}
	return 0;
}

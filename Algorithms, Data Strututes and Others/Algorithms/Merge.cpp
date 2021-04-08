#include<bits/stdc++.h>

using namespace std;

#define INF 0x3f3f3f3f
typedef long long ll;
typedef unsigned long long ull;

//retorna o numero de inversões
ull merge_sort(vector<ll> &v) {
	ll inv = 0;

	if (v.size() == 1)
		return inv;

	vector<ll> u1, u2;

	for(ull i = 0; i < v.size()/2; i++)
		u1.push_back(v[i]);
	for(ull i = v.size()/2; i < v.size(); i++)
		u2.push_back(v[i]);

	inv += merge_sort(u1);
	inv += merge_sort(u2);

	u1.push_back(INF);
	u2.push_back(INF);

	ull ini1 = 0, ini2 = 0;

	for(ull i = 0; i < v.size(); i++) {
		if(u1[ini1] < u2[ini2]) {
			v[i] = u1[ini1++];
		} else {
			v[i] = u2[ini2++];
			inv += u1.size() - ini1 - 1;
		}
	}

	return inv;
}

#include<bits/stdc++.h>

using namespace std;

#define INF 0x3f3f3f3f

long long merge_sort (vector<long long> &v) {
	if (v.size() == 1)
		return 0;

	vector<long long> u1, u2;
	for(long long i = 0; i < v.size()/2; i++)
		u1.push_back(v[i]);
	for(long long i = v.size()/2; i < v.size(); i++)
		u2.push_back(v[i]);

	long long inv = 0;

	inv += merge_sort(u1);
	inv += merge_sort(u2);

	u1.push_back(INF);
	u2.push_back(INF);

	long long ini1 = 0, ini2 = 0;

	for(long long i = 0; i < v.size(); i++) {
		if(u1[ini1] <= u2[ini2]) {
			v[i] = u1[ini1++];
		} else {
			v[i] = u2[ini2++];
			inv += u1.size() - ini1 - 1;
		}
	}

	return inv;
}

int main () {
	long long N, aux;
	vector<long long> v;

	cin >> N;
	while(N) {
		for(long long i = 0; i < N; i++) {
			cin >> aux;
			v.push_back(aux);
		}
		if(merge_sort(v) % 2 == 0)
			cout << "Carlos";
		else
			cout << "Marcelo";
		cout << endl;
		v.clear();
		cin >> N;
	}

	return 0;
}

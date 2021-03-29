/*
Inicio: 
Terminou de ler: 
Terminou de pensar sobre: 
Terminou de codar: 
Terminou de debuggar: 
Submits:  
*/

#include<bits/stdc++.h>
#include<string>

using namespace std;

long long merge_sort (vector<long long> &v) {
	
	if(v.size() == 1) return 0;

	vector<long long> u1, u2;
	for(long long i = 0; i < v.size()/2; i++) u1.push_back(v[i]);
	for(long long i = v.size()/2; i < v.size(); i++) u2.push_back(v[i]);
	
	long long inv = 0;

	inv += merge_sort(u1);
	inv += merge_sort(u2);

	u1.push_back(-2);
	u2.push_back(-2);

	long long ini1 = 0, ini2 = 0;

	for(long long i = 0; i < v.size(); i++) {
		if(u1[ini1] > u2[ini2])
			v[i] = u1[ini1++];
		else {
			v[i] = u2[ini2++];
			inv += u1.size()-ini1-1;
		}
	}

	return inv;
}

int main() {
	vector<long long> v;
	long long N, x, y;
	cin >> N;

	for(long long i = 0; i < N; i++) {
		cin >> x >> y;
		v.push_back(x*x+y*y);
	}

	cout << merge_sort(v) << endl;

	return 0;
}

// int v[N][M];
// memset(v, 0, sizeof(v));
// getline(cin, str);
// a = (b==c?d:a);
// cout << setprecision(12) << fixed;
// vector <int> v;

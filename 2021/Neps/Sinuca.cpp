#include<bits/stdc++.h>

using namespace std;

vector<int> enfilera (vector<int> v) {
	vector<int> u;
	for(int i = 0; i < v.size()-1; i++) {
		if(v[i] == v[i+1])
			u.push_back(1);
		else
			u.push_back(-1);
	}
	return u;
}

int main () {
	int N, aux;
	vector<int> v;
	cin >> N;
	for(int i = 0; i < N; i++) {
		cin >> aux;
		v.push_back(aux);
	}
	while(v.size() != 1)
		v = enfilera(v);
	cout << (v[0] == 1 ? "preta" : "branca") << endl;
	return 0;
}

#include<bits/stdc++.h>

using namespace std;

bool v[1000001], resp = 1;

int main () {
	int N, soma = 0, s = 0;
	long long m[1001][1001];
	cin >> N;
	memset(v, 0, sizeof(v));
	for(int i = 0; i < N; i++) {
		s = 0;
		for(int j = 0; j < N; j++) {
			cin >> m[i][j];
			if(m[i][j] > N*N || v[m[i][j]])
				resp = 0;
			else
				v[m[i][j]] = 1;
			if(i == 0)
				soma += m[i][j];
			s += m[i][j];
		}
		if(s != soma)
			resp = 0;
	}
	for(int j = 0; j < N && resp; j++) {
		s = 0;
		for(int i = 0; i < N; i++) {
			s += m[i][j];
		}
		if(s != soma)
			resp = 0;
	}
	if(resp)
		cout << soma << endl;
	else
		cout << 0 << endl;
	return 0;
}

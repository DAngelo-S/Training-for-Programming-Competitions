#include<bits/stdc++.h>

using namespace std;

int M, N;
char c[] = {'C', 'A', 'N', 'E', 'T', 'A', 'A', 'Z', 'U', 'L'}, v[1000][1000];

bool dfs (int i, int j, int pos = 0) {
//	cout << v[i][j];
	if (pos == 10)
		return true;
	if(i < 0 || j < 0 || i >= M || j >= N || v[i][j] != c[pos]) {
//		cout << endl;
//		cout << v[i][j] << " " << c[pos] << " " << pos << endl;
		return false;
	}
	return (dfs(i+1, j, pos+1) || dfs(i-1, j, pos+1) || dfs(i, j+1, pos+1) || dfs(i, j-1, pos+1) || dfs(i+1, j+1, pos+1) || dfs(i+1, j-1, pos+1) || dfs(i-1, j+1, pos+1) || dfs(i-1, j-1, pos+1));
}

int main () {
	vector<int> a, b;
	cin >> N >> M;
	for(int i = 0; i < M; i++) {
		for(int j = 0; j < N; j++) {
			cin >> v[i][j];
			if(v[i][j] == 'C') {
				a.push_back(i);
				b.push_back(j);
			}
		}
		//for(int j = 0; j < N; j++)
		//	cout << v[i][j] << " ";
		//cout << endl;
	}
	
	for(int i = 0; i < a.size(); i++) {
		if(dfs(a[i], b[i])) {
			cout << "SIM" << endl;
			return 0;
		}
	}

	cout << "NAO" << endl;
	return 0;
}


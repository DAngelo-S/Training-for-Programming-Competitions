#include<bits/stdc++.h>

using namespace std;

vector<int> vizinhos[100000];
bool visitei[100000];

void dfs(int i) {
	if(visitei[i])
		return;
	
	visitei[i] = 1;
	
	for(int j = 0; j < vizinhos[i].size(); j++)
		dfs(vizinhos[i][j]);

	return;
}

int main () {
	int N, A, B;
	cin >> N;
	for(int i = 0; i < N; i++) {
		cin >> A >> B;
		vizinhos[A-1].push_back(B-1);
	}
	for(int i = 0; i < vizinhos[0].size(); i++)
		dfs(vizinhos[0][1]);
	for(int i = 0; i < N; i++)
		if(!visitei[i]) {
			cout << "N" << endl;
			return 0;
		}
	cout << "S" << endl;
	return 0;
}

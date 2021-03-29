#include<bits/stdc++.h>

using namespace std;

bool visitei[501];
vector<int> l[501]; /* a linha i passa pelo terminal l[i][j] */
vector<int> t[501]; /* o terminal i tem as linhas t[i][j] */
int dp[501][501];

int dfs (int t_o, int t_d) {
	
	if(dp[t_o][t_d] != -1)
		return dp[t_o][t_d];

	int menor = 501;

	if(t_o == t_d) {
		return 0;
	}

	for(int i = 0; i < t[t_o].size(); i++) { 
		for(int j = 0; j < l[t[t_o][i]].size(); j++) {
			if(visitei[l[t[t_o][i]][j]])
				continue;
			visitei[l[t[t_o][i]][j]] = 1;
			menor = min(menor, 1 + dfs(l[t[t_o][i]][j], t_d));
			visitei[l[t[t_o][i]][j]] = 0;
		}
	}
	
	return dp[t_o][t_d] = menor;
}

int main () {

	memset(visitei, 0, sizeof(visitei));
	memset(dp, -1, sizeof(dp));

	int T, L, O, D, C, aux;

	cin >> T >> L >> O >> D;
	for(int i = 0; i < L; i++) {
		cin >> C;
		for(int j = 0; j < C; j++) {
			cin >> aux;
			l[i].push_back(aux-1);
			t[aux-1].push_back(i);
		}
	}
	dfs(O-1, D-1);
	cout << (dp[O-1][D-1] == 501 ? -1 : dp[O-1][D-1]) << endl;
	return 0;
}


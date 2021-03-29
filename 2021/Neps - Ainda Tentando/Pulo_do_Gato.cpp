#include<bits/stdc++.h>

using namespace std;

int v[501][501], L = 0, M = 0, dp[501][501];
bool visitei[501][501];

int menor_caminho (int i = 0, int j = 0) {
	int menor = 500*500+1;

	//cout << M << endl;
	if(i < 0 || j < 0 || i >= L || j >= M || v[i][j] == 0 || visitei[i][j] == 1) {
		//cout << 13 << " " << M << endl;
		return dp[i][j] = 500*500+1;
	}
	
	visitei[i][j] = 1;
	
	if(i == L - 1 && j == M - 1) {
		visitei[i][j] = 0;
		//cout << "OI";
		return dp[i][j] = 1;
	} else
		//cout << "q"<< L-1 << " " << M-1 << " - " << i << " " << j << endl;
	
	if(dp[i][j] != -1) {
		visitei[i][j] = 0;
		return dp[i][j];
	}

	for(int k = -2; k <= 2; k++) {
		for(int l = -2; l <=  2; l++) {
			//cout << 33 << " " << M << endl;
			menor = min(1 + menor_caminho(i + k, j + l), menor);
		}
	}

	visitei[i][j] = 0;
	dp[i][j] = menor;
	//cout << "m: " << menor << endl;
	return menor;
}

int main () {
	cin >> L >> M;
	memset(visitei, 0, sizeof(visitei));
	memset(dp, -1, sizeof(dp));
	for(int i = 0; i < L; i++)
		for(int j = 0; j < M; j++)
			cin >> v[i][j];
	//cout << L << " * " << M << endl;
	long long aux = menor_caminho();
	cout << (aux == 500*500+1 ? -1 : aux - 1)  << endl;

	return 0;
}

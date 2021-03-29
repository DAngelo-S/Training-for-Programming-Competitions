#include<bits/stdc++.h>

using namespace std;

int N, M, v[501][501];

bool soZero (int i, int j) {
	for(int k = i + 1; k < N; k++)
		if(v[k][j] != 0)
			return false;
	return true;
}

bool ehEscada () {
	int i=0, j=0;
	while(i < N && j < M) {
		if(v[i][j] != 0) {
			if(soZero(i, j)) {
				i++;
				j++;
			} else
				return false;
		} else {
			if(soZero(i, j))
				j++;
			else
				return false;
		}
	}
	return true;
}

int main () {
	cin >> N >> M;
	for(int i = 0; i < N; i++)
		for(int j = 0; j < M; j++)
			cin >> v[i][j];
	cout << ( ehEscada() ? "S" : "N" ) << endl;
	return 0;
}

#include<bits/stdc++.h>

using namespace std;

int L, C, v[1001][1001];

pair<int, int> caminho(int i, int j) {
	v[i][j] = 0;

	if(i + 1 < L && v[i+1][j] == 1)
		return caminho(i+1, j);
	if (i - 1 >= 0 && v[i-1][j] == 1)
		return caminho(i-1, j);
	if (j + 1 < C && v[i][j+1] == 1)
		return caminho(i, j+1);
	if (j - 1 >= 0 && v[i][j-1] == 1)
		return caminho(i, j-1);

	return make_pair(i, j);
}

int main () {
	int A, B;

	cin >> L >> C >> A >> B;

	for(int i = 0; i < L; i++)
		for(int j = 0; j < C; j++)
			cin >> v[i][j];
	
	pair<int, int> resp = caminho(A-1, B-1);
	cout << resp.first + 1 << " " << resp.second + 1 << endl;

	return 0;
}

#include<bits/stdc++.h>

using namespace std;

int main () {
	int m[5][5];

	memset(m, -1, sizeof(m));

	m[0][1] = 1;
	m[0][2] = 1;
	m[1][2] = 1;
	m[1][3] = 1;
	m[2][3] = 1;
	m[2][4] = 1;
	m[3][0] = 1;
	m[3][4] = 1;
	m[4][0] = 1;
	m[4][1] = 1;

	int N, v = 0, m1, m2;

	cin >> N;

	for(int i = 0; i < N; i++) {
		cin >> m1 >> m2;
		v += m[m1][m2];
	}

	cout << (v > 0 ? "will" : "11") << endl;

	return 0;
}

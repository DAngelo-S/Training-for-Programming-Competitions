#include<bits/stdc++.h>

using namespace std;

int pai[100001];

int find (int x) {
	if(pai[x] == x)
		return x;
	return pai[x] = find(pai[x]);
}

void unir (int x, int y) {
	pai[find(x)] = pai[find(y)];
}

int main () {
	int N, M, A, B;
	char C;

	cin >> N >> M;
	for(int i = 0; i < N; i++)
		pai[i] = i;

	for(int i = 0; i < M; i++) {
		cin >> C >> A >> B;
		if(C == 'F')
			unir(A-1, B-1);
		else if (C == 'C')
			cout << (find(A-1) == find(B-1) ? "S" : "N") << endl;
	}
	return 0;
}

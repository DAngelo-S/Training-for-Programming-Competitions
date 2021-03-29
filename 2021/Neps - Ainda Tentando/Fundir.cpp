#include <bits/stdc++.h>

using namespace std;

#define MAXN 10000

bool visitei[MAXN];
long long centro[MAXN], lado[MAXN];
long long tam[2][2][MAXN];
long long N, M;

long long dfsC (int no, int arv) {	
	if(visitei[i])
		return 0;

	visitei[i] = 1;

	if(centro[i] == 0)
		return tam[arv][0][no];

	return tam[arv][0][no] = 1 + dfsC(centro[i], tipo);
}

long long dfsL (int no, int arv) {	
	if(visitei[i])
		return 0;

	visitei[i] = 1;

	if(lado[i] == 0)
		return tam[arv][1][no];

	return tam[arv][1][no] = 1 + dfsL(lado[i], tipo);
}

void preenche(int tipo) {
	memset(visitei, 0, sizeof(visitei));
	for(int i = 0; i < (tipo == 0 ? N : M); i++) {
		dfsC(i, tipo);
	}
	memset(visitei, 0, sizeof(visitei));
	for(int i = 0; i < (tipo == 0 ? N : M); i++) {
		dfsL(i, tipo);
	}
}

int main() {
	long long x, y, z, maior=0;
	bool temCA = 0, temCB = 0;
	cin >> N;

	memset(tam, 0, sizeof(tam));

	for(int i = 0; i < N; i++) {
		cin >> x >> y >> z;
		centro[x-1] = z-1;
		if(!temCA)
			temCA=z;
	}
	
	preenche(0);
	
	cin >> M;
	for(int i = 0; i < M; i++) {
		cin >> x >> y >> z;
		centro[x-1] = z-1;
		if(!temCB)
			temCB = z;
	}

	preenche(1);

	for(long long i = 0; i < N; i++) {
		for(long long j = 0; j < M; j++) {
			/* centroA centroB */
			maior = max(maior, min(tam[0][0][i], tam[1][0][j]));
			/* centroA ladoB && ladoA centroB */
			maior = max(maior, min(tam[0][0][i], tam[1][1][j]) + min(tam[0][1][i], tam[1][0][j]) - 1);
			/* ladoA ladoB && um sem centro */
			if(!temCA || !temCB)
				maior = max(maior, min(tam[0][1][i], tam[1][1][j]);
		}
	}

	cout << N + M - maior  << endl;

	return 0;
}

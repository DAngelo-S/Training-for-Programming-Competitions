#include <bits/stdc++.h>

using namespace std;

#define MAXN 10000

bool visitei[MAXN];
long long centro[MAXN], lado[MAXN];
long long tam[2][2][MAXN];
long long N, M;
long long maiorC[2], maiorL[2], sMaiorC[2], sMaiorL[2];

long long dfsC (int no, int arv) {
	if(visitei[no])
		return 0;

	visitei[no] = 1;

	if(centro[no] == -1)
		return tam[arv][0][no] = 1;

	return tam[arv][0][no] = 1 + dfsC(centro[no], arv);
}

long long dfsL (int no, int arv) {	
	if(visitei[no])
		return 0;

	visitei[no] = 1;

	if(lado[no] == -1)
		return tam[arv][1][no] = 1;

	return tam[arv][1][no] = 1 + dfsL(lado[no], arv);
}

void preenche(int arv) {
	long long tmp;
	memset(visitei, 0, sizeof(visitei));
	for(int i = 0; i < (arv == 0 ? N : M); i++) {
		tmp = dfsC(i, arv);
		if(tmp >= tam[arv][0][maiorC[arv]]) {
			sMaiorC[arv] = maiorC[arv];
			maiorC[arv] = i;
		}
	}
	memset(visitei, 0, sizeof(visitei));
	for(int i = 0; i < (arv == 0 ? N : M); i++) {
		tmp = dfsL(i, arv);
		if(tmp >= tam[arv][1][maiorC[arv]]) {
			sMaiorL[arv] = maiorL[arv];
			maiorL[arv] = i;
		}
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
		lado[x-1] = y-1;
		if(!temCA)
			temCA=z;
	}
	
	preenche(0);
	
	cin >> M;
	for(int i = 0; i < M; i++) {
		cin >> x >> y >> z;
		centro[x-1] = z-1;
		lado[x-1] = y-1;
		if(!temCB)
			temCB = z;
	}

	preenche(1);

	/* centro centro */
	maior = max(maior, min(tam[0][0][maiorC[0]], tam[1][0][maiorC[1]]));
	
	/* ladoA ladoB && um sem centro */
	if(!temCA || !temCB) {
		maior = max(maior, min(tam[0][1][maiorL[0]], tam[1][1][maiorL[1]]));
		if(!temCA)
			maior = max(maior, min(tam[0][1][maiorL[0]], tam[1][0][maiorC[1]]));
		if(!temCB)
			maior = max(maior, min(tam[0][0][maiorC[0]], tam[1][1][maiorL[1]]));
	}

	maior = max(maior, min(tam[0][1][maiorL[0]], tam[1][0][maiorC[1]]));
	maior = max(maior, min(tam[0][0][maiorC[0]], tam[1][1][maiorL[1]]));

	cout << N + M - maior  << endl;

	return 0;
}

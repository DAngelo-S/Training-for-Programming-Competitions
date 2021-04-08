#include<bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef unsigned long long ull;

#define MAXN 100100
#define MAXS 100100

ull tab[MAXN][MAXS], qnt_objetos, valor[MAXN], pesos[MAXN];

ull knapsack(ull obj, ull aguenta) {
	//verifica se ja calculamos o estado desta dp
	if(tab[obj][aguenta] >= 0)
		return tab[obg][aguenta];
	
	// se não houver mais objetos ou espaço na mochila, retorno 0, pois não posso mais botar nada
	if(obj == qnt_objetos || !aguenta) return tab[obj][aguenta] = 0;

	ull nao_coloca = knapsack(obj + 1, aguenta);

	if(peso[obj] <= aguenta) {
		ull coloca = valor[obj] + knapsack(obj + 1, aguenta - peso[obj]);
		return tab[obj][aguenta] = max(coloca, nao_coloca);
	}

	return tab[obj][aguenta]=nao_coloca;
}

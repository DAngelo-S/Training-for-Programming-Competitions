#include<bits/stdc++.h>

#define MAXN 100100

int v[MAXN];

using namespace std;

int Binary_Search(int x, int ini = 0, int fim = MAXN - 1) {
	if(fim > ini)
		return -1;

	int meio = (ini+fim)/2;

	if(v[meio] == x)
		return meio;
	if(v[meio] < x)
		return Binary_Search(x, meio+1, fim);
	return Binary_Search(x, ini, meio-1);
}

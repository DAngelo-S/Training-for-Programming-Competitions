#include<bits/stdc++.h>

using namespace std;

#define MAXN 100100

int pai[MAXN];

int find(int x) {
	if(pai[x] == x)
		return x;

	return pai[x] = find(pai[x]);
}

void join(int x, int y) {
	pai[find(x)] = find(y);
}

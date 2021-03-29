#include<bits/stdc++.h>

using namespace std;

int R, C, L, O, o, l;
char v[251][251];

void dfs (int i, int j) {
	if(i < 0 || i >= R || j < 0 || j >= C || v[i][j] == '#')
		return;

	char tmp = v[i][j];
	v[i][j] = '#';

	if(tmp == 'k') 
		o++;
	else if (tmp == 'v') 
		l++;

	dfs(i+1, j);
	dfs(i-1, j);
	dfs(i, j+1);
	dfs(i, j-1);
	return;
}

void preenche_campos_sem_pastos () {
	for(int j = 0; j < C; j++) {
		if(v[0][j] != '#')
			dfs(0, j);
		if(v[R-1][j] != '#')
			dfs(L-1, j);
	}
	for(int i = 0; i < R; i++) {
		if(v[i][0] != '#')
			dfs(i, 0);
		if(v[i][C-1] != '#')
			dfs(i, C-1);
	}
}

void conta () {
	L = O = 0;
	preenche_campos_sem_pastos();
	for(int i = 0; i < R; i++) {
		for(int j = 0; j < C; j++) {
			if(v[i][j] != '#') {
				o = l = 0;
				dfs(i, j);
				if (l >= o)
					L += l;
				else
					O += o;
			}
		}
	}
}

int main () {
	cin >> R >> C;
	for(int i = 0; i < R; i++)
		for(int j = 0; j < C; j++)
			cin >> v[i][j];
	conta();
	cout << O << " " << L << endl;
	return 0;
}

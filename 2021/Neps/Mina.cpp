#include<bits/stdc++.h>

using namespace std;

#define FOR(i, N) for(int(i) = 0; (i) < (N); (i)++)
#define RESET(a, b) memset(a, b, sizeof(a))
#define SORT(v) sort(v.begin(), v.end())

#define INF 0x3f3f3f3f
int N, distancia[100][100], m[100][100];
bool visitado[100][100];

void dijkstra (int a = 0, int b = 0) {
	
	RESET(visitado, false);

	priority_queue< pair<int, pair<int, int>>, vector<pair<int, pair<int, int>>>, greater<pair<int, pair<int, int>>>> fila;
	fila.push(make_pair(0, make_pair(a, b)));

	int i, j, dist, cnt = 0;

	distancia[a][b] = 0;

	while(!fila.empty()) {

		i = fila.top().second.first;
		j = fila.top().second.second;

		//cout << i << " " << j << endl;

		visitado[i][j] = true;
		dist = distancia[i][j];

		if(i + 1 < N)
			if(dist + m[i+1][j] < distancia[i+1][j]) {
				distancia[i+1][j] = dist + m[i+1][j];
				fila.push(make_pair(distancia[i+1][j], make_pair(i+1, j)));
			}
		if(i - 1 >= 0)
			if(dist + m[i-1][j] < distancia[i-1][j]) {
				distancia[i-1][j] = dist + m[i-1][j];
				fila.push(make_pair(distancia[i-1][j], make_pair(i-1, j)));
			}
		if(j + 1 < N)
			if(dist + m[i][j+1] < distancia[i][j+1]) {
				distancia[i][j+1] = dist + m[i][j+1];
				fila.push(make_pair(distancia[i][j+1], make_pair(i, j+1)));
			}
		if(j - 1 >= 0)
			if(dist + m[i][j-1] < distancia[i][j-1]) {
				distancia[i][j-1] = dist + m[i][j-1];
				fila.push(make_pair(distancia[i][j-1], make_pair(i, j-1)));
			}
		
		while(!fila.empty() && visitado[fila.top().second.first][fila.top().second.second]) {
			//cout << fila.top().second.first << " " << fila.top().second.second << endl;
			fila.pop();
		}
	}

	return;
}


int main () {

	RESET(distancia, INF);

	cin >> N;
	for(int i = 0; i < N; i++)
		for(int j = 0; j < N; j++)
			cin >> m[i][j];

	dijkstra(); 
	cout << distancia[N-1][N-1] << endl;

	return 0;
}

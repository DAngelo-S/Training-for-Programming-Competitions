#include<bits/stdc++.h>

using namespace std;

#define MAXN 100000

int main() {
	int num[10], v, N, M, sum[10][MAXN], ant = -1;

	memset(sum, 0, sizeof(sum));
	memset(num, 0, sizeof(num));

	cin >> N >> M;
	
	for(int i = 0; i < N; i++) {
		cin >> v;
		for(int j = 0; j < 10 && i > 0; j++) {
			sum[j][i] = sum[j][i-1];
		}
		sum[v][i]++;
	}

	/*for(int i = 0; i < N; i++)
		for(int j = 0; j < 10; j++)
			cout << i+1 << " " << j << ": " << sum[j][i] << endl;
*/
	for(int i = 0; i < M; i++) {
		cin >> N;
		N--;
		for(int j = 0; j < 10; j++) {
			if(N > ant) {
				num[j] += sum[j][N];
//				cout << j << ": " <<  num[j] << " " << sum[j][N] << endl;
				if(ant != -1) {
					num[j] -= sum[j][ant];
//					cout << ant << " " << sum[j][ant] << endl;
				}
			} else {
				num[j] += sum[j][ant-1];
				if(N > 0)
					num[j] -= sum[j][N-1];
			}
		}
		ant = N;
	}

	for(int i = 0; i < 10; i++)
		cout << num[i] << " ";
	cout << endl;

	return 0;
}

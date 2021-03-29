#include<bits/stdc++.h>

using namespace std;

long long n, v[101][101], menor = 10001, i=0, j=0;
bool jaVim[101][101];

void move (long long c = 0) {
	//cout << i << " " << j << endl;
	jaVim[i][j] = 1;

	if( i == n-1 && j == n - 1) {
		menor = min(menor, c);
	}

	c += v[i][j];
	if(c > menor)
		return;

	if(i-1 >= 0 && !jaVim[i-1][j]) {
		i--;
		move(c);
		jaVim[i][j] = 0;
		i++;
	}
	if (i+1 < n && !jaVim[i+1][j]) {
		i++;
		move(c);
		jaVim[i][j] = 0;
		i--;
	}
	if (j-1 >= 0 && !jaVim[i][j-1]) {
		j--;
		move(c);
		jaVim[i][j] = 0;
		j++;
	}
	if (j+1 < n && !jaVim[i][j+1]) {
		j++;
		move(c);
		jaVim[i][j] = 0;
		j--;
	}
	return;
}

int main() {
	cin >> n;
	memset(jaVim, 0, sizeof(jaVim));
	for(long long i = 0; i < n; i++)
		for(long long j = 0; j < n; j++)
			cin >> v[i][j];
	jaVim[0][0] = 1;
	move();
	cout << menor << endl;
	return 0;
}

#include<bits/stdc++.h>

using namespace std;

long long n, v[101][101], menor = 10001, i=0, j=0;
bool jaVim[101][101];
stack<char> pilha; 

/* a = i-1
   b = i+1
   c = j-1
   d = j+1
   */

bool move (char prox) {
	//cout << "testa: " << prox << endl;
	if(prox == 'a' && i-1 >= 0 && !jaVim[i-1][j]) {
		i--;
		return true;
	}
	else if (prox == 'b' && i+1 < n && !jaVim[i+1][j]) {
		i++;
		return true;
	}
	else if (prox == 'c' && j-1 >= 0 && !jaVim[i][j-1]) {
		j--;
		return true;
	}
	else if (prox == 'd' && j+1 < n && !jaVim[i][j+1]) {
		j++;
		return true;
	}
	return false;
}


void caminho () {
	long long num = 0;
	char prox = 'a';

	do {	
		jaVim[i][j] = 1;

		if (move(prox)) {
			pilha.push(prox);
			//cout << prox << " ";
			prox = 'a';
			num += v[i][j];
			jaVim[i][j] = 1;
			//cout << i << " " << j << endl;
		} else {
			prox++;
		}

		if (i == n-1 && j == n-1) {
			if(num < menor)
				menor = num;
			if(menor == 0)
				return;
		}

		while( !pilha.empty() && (i == n-1 && j == n-1 || prox > 'd')) {
			prox = pilha.top();
			//cout << "T:" << prox << " ";
			jaVim[i][j] = 0;
			num -= v[i][j];
			if(prox == 'a')
				i++;
			else if(prox == 'b')
				i--;
			else if(prox == 'c')
				j++;
			else
				j--;
			//cout << i << " " << j << endl;
			pilha.pop();
			prox++;
		}

	} while(!(pilha.empty() && prox > 'd'));	
}

int main() {
	cin >> n;
	memset(jaVim, 0, sizeof(jaVim));
	for(long long i = 0; i < n; i++)
		for(long long j = 0; j < n; j++)
			cin >> v[i][j];
	jaVim[0][0] = 1;
	caminho();
	cout << menor << endl;
	return 0;
}

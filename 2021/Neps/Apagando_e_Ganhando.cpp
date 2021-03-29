#include <bits/stdc++.h>

using namespace std;

#define MAXN 1000001

stack<char> pilha;

void imprime() {
	char c[pilha.size()+1];
	c[pilha.size()] = '\0';
	for(long long i = pilha.size() - 1; !pilha.empty(); i--) {
		c[i] = pilha.top();
		pilha.pop();
	}
	cout << c << endl;
}

int main () {
	char c;
	long long n, d, apagados;
	cin >> n >> d;
	while (n != 0) {
		apagados = 0;
		for(long long i = 0; i < n; i++) {
			cin >> c;

			while(!pilha.empty() && apagados < d && c > pilha.top()) {
				pilha.pop();
				apagados++;
			}

			if(pilha.size() < n-d)
				pilha.push(c);
		}

		imprime();

		cin >> n >> d;
	}
}


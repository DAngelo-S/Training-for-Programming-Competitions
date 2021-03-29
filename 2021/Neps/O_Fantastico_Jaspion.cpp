#include<bits/stdc++.h>

using namespace std;

void run() {
	map<string, string> traduz;
	long long M, N, c;
	string jap, pt;
	string frase;
	char palavra[81];

	scanf("%lld %lld\n", &M, &N);

	for(long long i = 0; i < M; i++) {
		getline(cin, jap);
		getline(cin, pt);
		traduz[jap] = pt;
	}

	for(long long i = 0; i < N; i++) {
		getline(cin, frase);
		c = 0;
		for(long long j = 0; j < frase.size(); j++) {
			if(frase[j] == ' ') {
				palavra[c] = '\0';
				if(traduz.find(palavra) != traduz.end()) {
					cout << traduz[palavra] << " ";
				} else {
					cout << palavra << " ";
				}
				c = 0;
			} else
				palavra[c++] = frase[j];
		}
		palavra[c]='\0';
		if(traduz.find(palavra) != traduz.end()) {
			cout << traduz[palavra];
		} else
			cout << palavra;
		cout << endl;
	}
}

int main () {
	long long teste;
	scanf("%lld\n", &teste);
	while(teste--) {
		run();
	}
}

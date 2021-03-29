#include<bits/stdc++.h>

using namespace std;

int main () {

	int F, total = 0, janela[600];
	bool coloca = 1;

	for(int i = 0; i < 600; i++)
		janela[i] = 100;

	for(int i = 0; i < 3; i++) {
		cin >> F;
		for(int j = F; j < F + 200; j++) {
			//cout << janela[j] << " ";
			janela[j] = 0;
		}
		//cout << endl;
	}

	for(int i = 0; i < 600; i++) {
		total += janela[i];
	}

	cout << total << endl;

	return 0;
}

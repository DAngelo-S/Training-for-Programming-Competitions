#include<bits/stdc++.h>

using namespace std;

int main () {
	int N, C, S, E, total = 0;
	bool excedeu = 0;
	cin >> N >> C;
	for(int i = 0; i < N; i++) {
		cin >> S >> E;
		total += E - S;
		if (total > C)
			excedeu = 1;
	}
	if(excedeu)
		cout << "S" << endl;
	else
		cout << "N" << endl;
	return 0;
}

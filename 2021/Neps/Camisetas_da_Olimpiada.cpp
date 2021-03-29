#include<bits/stdc++.h>

using namespace std;

int main () {
	int N, t, peq = 0, med = 0, P, M;
	cin >> N;
	for(int i = 0; i < N; i++) {
		cin >> t;
		if(t == 1)
			peq++;
		else
			med++;
	}
	cin >> P >> M;
	if(P >= peq && M >= med)
		cout << "S" << endl;
	else
		cout << "N" << endl;
	return 0;
}

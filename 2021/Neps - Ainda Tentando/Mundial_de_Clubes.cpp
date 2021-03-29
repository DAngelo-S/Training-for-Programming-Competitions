#include<bits/stdc++.h>

using namespace std;

int v[8];

#define INF 10000001

bool lucky(int n) {
	bool ok = 1;
	v[4] = v[7] = 0;
	while(n!=0) {
		if(n%10 !=4 && n%10!=7)
			ok = 0;
		else
			v[n%10]++;
		n/=10;
	}
	return ok;
}

int main () {
	int N, M, n1 = INF, n2 = INF, m1 = INF, m2 = INF, aux;
	bool ok = 1;

	cin >> N;
	for(int i = 0; i < N; i++) {
		cin >> aux;
		if(lucky(aux))
			n1 = min(n1, aux);
		if(aux < n2 && (v[4] != 0 || v[7] != 0) && lucky(v[4]) && lucky(v[7]))
			n2 = aux;

	}
	
	cin >> M;
	for(int i = 0; i < M; i++) {
		cin >> aux;
		if(lucky(aux))
			m1 = min(aux, m1);
		if(aux < m2 && (v[4] != 0 || v[7] != 0) && lucky(v[4]) && lucky(v[7]) )
			m2 = aux;
	}
	
	if(n1 != INF && m1 != INF)
		cout << n1 << endl << m1 << endl;
	else if (n2 != INF && m2 != INF)
		cout << n2 << endl << m2 << endl;
	else
		cout << -1 << endl;
	return 0;
}

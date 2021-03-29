#include<bits/stdc++.h>

using namespace std;

int main () {
	map<int, int> indo, voltando;
	int cnt = 0, soma = 0, N, D, c[1000000];
	
	cin >> N >> D;
	
	for(int i = 0; i < N; i++) {
		cin >> c[i];
		soma += c[i];
		indo[soma] = i;
	}
	
	soma = 0;
	for(int i = N-1; i >= 0; i--) {
		soma += c[i];
		voltando[soma] = i;
	}

	for(map<int, int>::iterator it = indo.begin(); it != indo.end(); ++it) {
		if(it->first == D)
			cnt++;
		else if(it->first < D) {
			if(voltando.find(D-it->first) != voltando.end() && voltando[D-it->first] > it->second)
				cnt++;
		} else {
			if(indo.find(it->first - D) != indo.end() && indo[it->first - D] < it->second)
				cnt++;
		}
	}

	cout << cnt << endl;
	return 0;
}

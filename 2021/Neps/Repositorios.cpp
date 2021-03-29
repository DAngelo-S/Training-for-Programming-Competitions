#include <bits/stdc++.h>

using namespace std;

int main () {
	long long C, N, p, v, v_ant;
	map<long long, long long> comp, install;

	cin >> C >> N;
	for(long long i = 0; i < C; i++) {
		cin >> p >> v;
		comp[p] = v;
	}

	for(long long i = 0; i < N; i++) {
		cin >> p >> v;
		if (comp.find(p) != comp.end()) {
			v_ant = comp[p];
			if (v > v_ant) {
				comp.erase(p);
				install[p] = v;
			}
		} else if (install.find(p) != install.end()) {
			v_ant = install[p];
			if( v > v_ant) {
				install[p] = v;
			}
		} else {
			install[p] = v;
		}
	}

	for(map<long long, long long>::iterator it = install.begin(); it != install.end(); ++it) {
		cout << it->first << " " << it->second << endl;
	}

	return 0;
}

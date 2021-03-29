#include<bits/stdc++.h>

using namespace std;

int main () {
	set<int> s[1001];
	int N, K, U, v[10001], aux;
	bool fim = false;
	
	cin >> N >> K >> U;
	
	for(int i = 0; i < N; i++) {
		for(int j = 0; j < K; j++) {
			cin >> aux;
			s[i].insert(aux);
		}
	}

	for(int i = 0; i < U; i++) {
		cin >> aux;
		if(!fim) {
			for(int j = 0; j < N; j++) {
				if(s[j].find(aux) != s[j].end())
					s[j].erase(aux);
				if(s[j].empty()){
					cout << j+1 << " ";
					fim = true;
				}
			}
		}
	}
	cout << endl;
	return 0;
}

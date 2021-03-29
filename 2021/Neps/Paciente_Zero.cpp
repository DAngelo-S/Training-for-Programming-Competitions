#include<bits/stdc++.h>

using namespace std;

set<int> s;
int pai[1001], N;

int find(int i) {
	if(pai[i] == i)
		return i;
	return pai[i] = find(pai[i]);
}

void encontra() {
	for(int i = 0; i < N; i++)
		s.insert(find(i));
}

int main () {
	int C, P, I, X;
	cin >> N >> C;
	for(int i = 0; i < N; i++)
		pai[i] = i;
	for(int i = 0; i < C; i++) {
		cin >> P >> I;
		P--;
		for(int j = 0; j < I; j++) {
			cin >> X;
			X--;
			pai[X] = P;
		}
	}
	encontra();
	for(set<int>::iterator it = s.begin(); it != s.end(); ++it)
		cout << *it+1 << endl;
	return 0;
}

#include<bits/stdc++.h>

using namespace std;

int main () {
	int N, p = 0, aux;
	cin >> N;
	for(int i = 0; i < N; i++) {
		cin >> aux;
		p += aux-1;
	}
	cout << p << endl;
	return 0;
}

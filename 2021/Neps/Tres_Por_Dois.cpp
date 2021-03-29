#include<bits/stdc++.h>

using namespace std;

int main () {
	int N, P[100001];
	long long soma = 0;
	cin >> N;
	for(int i =0; i < N; i++)
		cin >> P[i];
	sort(P, P+N);
	for(int i = 1; i <= N; i++) {
		if(i % 3 != 0)
			soma += P[N-i];
	}
	cout << soma << endl;
	return 0;
}

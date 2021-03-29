#include<bits/stdc++.h>

using namespace std;

int main () {
	long long V, N;
	cin >> V >> N;

	for(long long i = 1; i < 10; i++)
		cout << ((i * V * N) % 10 ? ((i * V * N) / 10 + 1) : (i * V * N) / 10) << (i < 9 ? " " : "\n");
	return 0;
}

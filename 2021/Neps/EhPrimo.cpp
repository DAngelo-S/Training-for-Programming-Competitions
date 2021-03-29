#include<bits/stdc++.h>

using namespace std;

bool primo(long long N) {
	if(N == 1) return 0;
	if(N == 2) return 1;
	if(N % 2 == 0) return 0;
	for(long long i = 3; i*i <=N; i++) {
		if(N % i == 0) return 0;
	}
	return 1;
}

int main() {
	long long N;
	cin >> N;
	cout << (primo(N)?"S":"N") << endl;
	return 0;
}

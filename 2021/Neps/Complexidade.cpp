#include<bits/stdc++.h>

using namespace std;

int main() {
	long long N, cnt=0;
	cin >> N;
	while(N >= 1000000) {
		N -= 1000;
		cnt++;
	}
	cout << cnt << endl;
	return 0;
}

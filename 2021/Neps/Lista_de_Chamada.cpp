#include<bits/stdc++.h>

using namespace std;

int main () {
	int N, K;
	string s[101];
	cin >> N >> K;
	for(int i = 0; i < N; i++)
		cin >> s[i];
	sort(s, s+N);
	cout << s[K-1] << endl;
	return 0;
}

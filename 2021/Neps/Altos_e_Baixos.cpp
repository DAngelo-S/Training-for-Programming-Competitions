#include<bits/stdc++.h>

using namespace std;

int main () {
	long long N, cnt = 0, menor = 0, v[1000001];
	string s;
	
	cin >> N >> s;

	v[0] = 0;

	for(long long i = 1; i < N; i++) {
		if (s[i-1] == 'A')
			cnt++;
		else
			cnt--;
		menor = min(cnt, menor);
		v[i] = cnt;
	}

	for(long long i = 0; i < N; i++)
		cout << v[i] - menor << " ";
	
	cout << endl;
	return 0;
}

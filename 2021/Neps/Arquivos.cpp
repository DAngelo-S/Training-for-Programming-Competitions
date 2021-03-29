#include<bits/stdc++.h>

using namespace std;

int main () {
	long long N, B, v[100001], pasta = 0, ini = 0;
	memset(v, 0, sizeof(v));
	cin >> N >> B;
	for(long long i = 0; i < N; i++)
		cin >> v[i];
	sort(v, v+N);
	for(long long f = N-1; f >= ini; f--) {
		if(ini != f && v[ini] + v[f] <= B) {
			ini++;
			pasta++;
		} else if (v[f] <= B) {
			pasta++;
		}
	}
	cout << pasta << endl;
	return 0;
}


#include<bits/stdc++.h>

using namespace std;

int main() {
	long long N, I, F, v[1001], cnt = 0;
	cin >> N >> I >> F;
	for(long long i = 0; i < N; i++)
		cin >> v[i];

	for(long long i = 0; i < N; i++)
		for(long long j = i + 1; j < N; j++)
			if(v[i] + v[j] >= I && v[i] + v[j] <= F)
				cnt++;

	cout << cnt << endl;
	return 0;
}

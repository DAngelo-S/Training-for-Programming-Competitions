#include<bits/stdc++.h>

using namespace std;

int main() {
    long long N, p, max, min, f, aux, dv[100002];

    cin >> N >> p;
    char s[N+2];
    s[N+1] = '\0';
    max = N;

    dv[0] = 0;

    for (long long i = 1; i <= N; i++) {
	dv[i] = dv[i-1];
	aux = i;
	while (aux % p == 0) {
	    dv[i]++;
	    aux /= p;
	}
    }

    dv[N+1] = 0;

    for (long long i = 0; i <= N/2; i++) {
	
	min = N - i;
	aux = i;

	f = dv[N] - dv[aux] - dv[min];

	s[N-i] = s[i] = (f > 0 ? '1' : '0');
    }

    cout << s << endl;
}

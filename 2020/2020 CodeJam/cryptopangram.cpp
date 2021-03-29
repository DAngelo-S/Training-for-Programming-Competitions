#include<bits/stdc++.h>

using namespace std;

#define MAXN 10001

long long prime[MAXN];

long long c = 1;

long long primo(long long n) {
	for(long long i = 0; i<c && prime[i]<=n/prime[i] + 1; i++) {
        if (n % prime[i] == 0)
            return 0;
    }
    return 1;
}

long long insere (long long n, long long v[]) {
	
	for(long long i=0; i<26; i++) {
		if (v[i] == -1) {
			v[i] = n;
			return 0;
		}else if (v[i] == n) {
			return 0;
		} else if (v[i] < n) {
			continue;
		} else if (v[i] > n) {
			for(long long j = 25; j>i; j--) {
				v[j] = v[j-1];
			} v[i] = n;
			return 0;
		}
	}
	
}

int busca (long long n, long long v[]) {

	int i;

	for (i=25; i>0; i--)
		if (n == v[i]) break;
		
	return i;

}

int main () {

	long long T=0, oldN=2, N=0, L=0, F[MAXN], Alpha[26];
	long long A=0, B=0, C=0;
	int x=0;
		
	prime[0] = 2;
	
	cin >> T;
	
	for(long long i=0; i<T; i++) {
	
		for(int i=0; i<26; i++) Alpha[i] = -1;
	
		cin >> N >> L;
	
		for(long long j=oldN+1; j<=N; j++) {
			if (primo(j)) {
				prime[c] = j;
				c++;
			}
		}
		
		for(long long k=0; k<L; k++) {
			cin >> F[k];
		}
		
		//primeiro caso
		A = B = C = 0;
		for(long long l=0; l<MAXN || A!=0; l++) {
			if (F[0]%prime[l] == 0) {
				A = prime[l];
				B = F[0]/prime[l];
				if (F[1]/A == 0) {
					C = F[1]/A;
					F[0] = B;
				} else {
					C = F[1]/B;
					F[0] = A;
				} break;
			}
		}
		F[1] = A+B-F[0];
		A = C;
		
		//demais casos
		for(long long m=2; m<L; m++) {
			B = F[m]/A;
			F[m] = A;
			A = B;
		}
		F[L] = B;
		
		for(long long n=0; n<=L; n++) {
			insere(F[n], Alpha);
		}
		
		cout<< "Case #" << (i+1) << ": ";
		for(long long o=0; o<=L; o++) {
			x = busca(F[o], Alpha);
			printf("%c", ('A'+x));
		}
		cout << "\n";
		
		A = B = C = 0;
		oldN = N;
		
	}
	
	return 0;
}

#include<bits/stdc++.h>

using namespace std;

typedef long long ll;

#define MAXN 12000000

bool composite[MAXN];
vector<ll> prime;

// sieve is crivo (Portuguese).
void Sieve(ll N) {
	if(N >= MAXN) {
		cout << "Impossible to calc" << endl;
		return;
	}
	for(ll i = 2; i < N; i++) {
		if(!composto[i]) {
			prime.push_back(i);
			for(ll j = i*i; j < N; j += i)
				composite[j] = 1;
		}
	}
}

bool Is_Prime (ll N) {
	return composite[N];
}

ll Nth_Prime (ll x, ll beg = 0, ll end = prime.size() - 1) {
	if(beg > end)
		return -1;
	ll mid = (beg+end)/2;
	
	if(prime[mid] == x)
		return mid+1;
	if(prime[mid] < x)
		return Nth_Prime(x, mid+1, end);
	return Nth_Prime(x, beg, mid-1);
}

int main() {
	memset(composite, 0, sizeof(composite));
	ll N;
	cin >> N;
	sieve(N);
}

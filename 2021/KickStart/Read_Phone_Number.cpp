#include<bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef vector<ll> vll;
typedef pair<ll, ll> pll;

#define f first;
#define s second;
#define pb push_back;
#define mp make_pair;

#define FOR(i, N) for(int(i) = 0; (i); (i) < (N); (i)++)
#define RESET(a, b) memset(a, b, sizeof(a))
#define SORT(v) sort(v.begin(), v.end())

string number (ll c) {
	if(c == 0)
		return "zero";
	if(c == 1)
		return "one";
	if(c == 2)
		return "two";
	if(c == 3)
		return "three";
	if(c == 4)
		return "four";
	if(c == 5)
		return "five";
	if(c == 6)
		return "six";
	if(c == 7)
		return "seven";
	if(c == 8)
		return "eight";
	return "nine";
}

int num (char c) {
	if(c == '0')
		return 0;
	if(c == '1')
		return 1;
	if(c == '2')
		return 2;
	if(c == '3')
		return 3;
	if(c == '4')
		return 4;
	if(c == '5')
		return 5;
	if(c == '6')
		return 6;
	if(c == '7')
		return 7;
	if(c == '8')
		return 8;
	if(c == '9')
		return 9;
	return -1;
}

string multiplicador(ll n) {
	if(n == 2)
		return "double";
	if(n == 3)
		return "triple";
	if(n == 4)
		return "quadruple";
	if(n == 5)
		return "quintuple";
	if(n == 6)
		return "sextuple";
	if(n == 7)
		return "septuple";
	if(n == 8)
		return "octuple";
	if(n == 9)
		return "nonuple";
	if(n == 10)
		return "decuple";
	return "-1";
}

int run () {
	string phone, read;
	char c, aux;
	ll v[10], ant = -1, atual, ini=0, N;
	vll r;

	RESET(v, 0);

	scanf("%s", phone);
	//cout << phone.size();
	do {
		scanf("%lld", &N);
		aux = getchar();
		for(ll j = 0; j < N; j++) {
			atual = num(phone[ini++]);
			v[atual]++;
	
			if(ant != -1 && atual != ant) {
				if(v[ant] == 1)
					cout << number(ant) << " ";
				else if (v[ant] >= 11)
					for(int k = 0; k < v[ant]; k++)
						cout << number(ant) << " ";
				else
					cout << multiplicador(v[ant]) << " " << number(ant) << " ";
				v[ant] = 0;
			}
			ant = atual;
		}

		if(v[atual] == 1)
			cout << number(atual) << " ";
		else if(v[atual] >= 11)
			for(int k = 0; k < v[atual]; k++)
				cout << number(atual) << " ";
		else
			cout << multiplicador(v[ant]) << " " << number(ant) << " ";
		v[atual] = 0;

		ant = -1;
	} while(aux != '\n');

	return 0;
}

int main () {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	ll T, t = 0;
	cin >> T;
	while(++t <= T) {
		cout << "Case #" << t << ": ";
		run();
		cout << "\n";
	}
	
	return 0;
}

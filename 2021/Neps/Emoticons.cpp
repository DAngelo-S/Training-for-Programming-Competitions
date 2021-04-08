#include<bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef vector<ll> vl;
typedef pair<ll, ll> pll;

#define f first
#define s second
#define pb push_back
#define mp make_pair

#define FOR(i, N) for(int(i) = 0; (i) < (N); (i)++)
#define RESET(a, b) memset(a, b, sizeof(a))
#define SORT(v) sort(v.begin(), v.end())

#define FUN 0
#define SAD 1

int main () {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	string s;
	int emoticons[2], i;

	RESET(emoticons, 0);

	getline(cin, s);

	FOR(i, s.size()-2) {
		if(s[i] == ':' && s[i+1] == '-') {
			if(s[i+2] == ')')
				emoticons[FUN]++;
			else if (s[i+2] == '(')
				emoticons[SAD]++;
		}
	}

	if(emoticons[FUN] == emoticons[SAD])
		cout << "neutro";
	else if (emoticons[FUN] > emoticons[SAD])
		cout << "divertido";
	else
		cout << "chateado";
	cout << endl;

	return 0;
}

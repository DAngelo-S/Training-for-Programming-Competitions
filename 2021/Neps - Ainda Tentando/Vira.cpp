#include<bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef vector<int> vl;
typedef pair<ll, ll> pll;

#define f first;
#define s second;
#define pb push_back;
#define mp make_pair;

#define FOR(i, N) for(int(i) = 0; (i); (i) < (N); (i)++)
#define RESET(a, b) memset(a, b, sizeof(a))
#define SORT(v) sort(v.begin(), v.end())

int cnt  = 0;

// aux[i] = 1 = preto
// aux[i] = -1 = branco
// aux[i] = 0 = nao existe

bool visitei[1001];

void resolve(vl v) {
	bool completo = 1;

	for(int i = 0; i < v.size(); i++) {
		if(v[i] == 1)
			cout << "P";
		else if(v[i] == -1)
			cout << "B";
		else
			cout << " ";
		cout << (i == v.size()-1 ? '\n' : ' ');
	}

	for(int i = 0; i < v.size(); i++) {
		if(v[i] == 1) {	
			completo = 0;
			
			v[i] = 0;
			if(i > 0)
				v[i-1] *= -1;
			if(i < v.size()-1)
				v[i+1] *= -1;
			
			resolve(v);
			
			if(i > 0)
				v[i-1] *= -1;
			if(i < v.size()-1)
				v[i+1] *= -1;
			
			/*v[i] = -1;
			if(!visitei[i]) {
				visitei[i] = 1;
				resolve(v);
				visitei[i] = 0;
			}*/

			v[i] = 1;
			
		} else if (v[i] == -1) {
			completo = 0;
		}
	}
	if(completo)
		cnt++;
}

int main () {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	char c;
	vl v;
	int n;

	cin >> n;

	RESET(visitei, 0);
	
	for(int i = 0; i < n; i++) {
		cin >> c;
		if(c == 'B')
			v.push_back(-1);
		else
			v.push_back(1);
	}

	resolve(v);

	cout << cnt << '\n';

	return 0;
}

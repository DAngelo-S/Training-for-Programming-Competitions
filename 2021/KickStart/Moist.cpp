#include<bits/stdc++.h>

using namespace std;

/*
typedef long long ll
typedef vector<ll> vl;
typedef pair<ll, ll> pll;

#define f first;
#define s second;
#define pb push_back;
#define mp make_pair;

#define FOR(i, N) for(int(i) = 0; (i); (i) < (N); (i)++)
#define RESET(a, b) memset(a, b, sizeof(a))
#define SORT(v) sort(v.begin(), v.end())
*/

int main () {
	ios_base::sync_with_stdio(false);
	//cin.tie(NULL);

	int T, t = 0, N, cnt = 0;
	string s[100], tmp;
	
	scanf("%d", &T);

	while(t != T) {
		cnt = 0;
		scanf("%d", &N);
		for(int i = 0; i < N; i++) {
			getline(cin, s[i]);
			//cout << i << endl;
			for(int j = 0; j < i; j++) {
				if(s[j] > s[i]) {
					tmp = s[i];
					for(int k = i; k > j; k--){
						s[k] = s[k-1];
						cnt++;
					} 
					s[j] = tmp;
					//cnt++;
				}
				break;
			}
		}
		cout << "Case #" << ++t << ": " << cnt << "\n";
	}

	return 0;
}

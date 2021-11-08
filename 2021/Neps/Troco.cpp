#include<bits/stdc++.h>

using namespace std;

#define FOR(i, N) for(int(i) = 0; (i) < (N); (i)++)
#define RESET(a, b) memset(a, b, sizeof(a))
#define SORT(v) sort(v.begin(), v.end())

int N;
int moeda[100100]; //25 10 5 1
int dp[1000][100000];

int temTroco (int i, long long troco) { // troco = 16
	if(!troco)
		return 1;
	else if(troco < 0)
		return 0;

	if(i >= N)
		return 0;

	if(dp[i][troco] != -1)
		return dp[i][troco];

	return dp[i][troco] = temTroco(i+1, troco) || temTroco(i+1, troco - moeda[i]);
}

int main () {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	memset(dp, -1, sizeof(dp));

	long long troco;
	cin >> troco >> N;

	for(int i = 0; i < N; i++)
		cin >> moeda[i];

	cout << (temTroco(0, troco) != 0 ? "S" : "N") << endl;

	return 0;
}

#include<bits/stdc++.h>

using namespace std;

#define FOR(i, N) for(int(i) = 0; (i) < (N); (i)++)
#define RESET(a, b) memset(a, b, sizeof(a))
#define SORT(v) sort(v.begin(), v.end())

string room, sofa;
vector<int> c[2], k[2];

bool verify (string room) {

	char color;

	for(int a = 0; a < 2; a++) {
		if(c[a].size() > 0)
			color = room[c[a][0]];
		for(int i = 0; i < c[a].size(); i++)
			if(room[c[a][i]] != color)
				return false;
				
	}

	return true;
}

bool verif (string room) {

	char color;

	for(int a = 0; a < 2; a++) {
		if(k[a].size() > 0)
			color = room[k[a][0]];
		for(int i = 0; i < k[a].size(); i++)
			if(room[k[a][i]] != color)
				return false;
				
	}

	return true;
}

int func () {
	int cnt = 0;
	for(int i = 0; i < room.size() - sofa.size() + 1; i++)
		cnt += verify(room.substr(i, sofa.size())) || verif(room.substr(i, sofa.size()));
	return cnt;
}

int main () {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	cin >> room >> sofa;
	int cnt;

	for(int i = 0; i < sofa.size(); i++) {
		c[sofa[i] - '0'].push_back(i);
		k[sofa[i] - '0'].push_back(sofa.size() - 1 - i);
	}

	cout << func() << endl; 

	return 0;
}

#include<bits/stdc++.h>

using namespace std;

int main () {
	long long N, D, M, P;
	cin >> N >> D >> M >> P;
	if(N*D > M*P)
		cout << "NERF" << endl;
	else
		cout << "BUFF" << endl;
	return 0;
}

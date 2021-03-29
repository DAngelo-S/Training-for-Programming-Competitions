#include<bits/stdc++.h>

using namespace std;

int main () {
	long long v[10], aux;
	bool pode = true;
	memset(v, 0, sizeof(v));
	for(long long i = 0; i < 8; i++) {
		cin >> aux;
		v[aux]++;
		if(v[aux] >= 5)
			pode = false;
	}
	cout << (pode ? "S" : "N") << endl;
	return 0;
}

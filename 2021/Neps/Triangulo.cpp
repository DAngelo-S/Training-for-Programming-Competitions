#include<bits/stdc++.h>

using namespace std;

int main () {
	long long v[4];
	for(long long i = 0; i < 4; i++)
		cin >> v[i];
	sort(v, v+4);
	if( (v[0] < v[1] + v[2] && v[1] < v[0] + v[2] && v[2] < v[1] + v[0]) ||
	    (v[1] < v[2] + v[3] && v[2] < v[1] + v[3] && v[3] < v[1] + v[2]) )
		cout << "S" << endl;
	else
		cout << "N" << endl;
	return 0;
}

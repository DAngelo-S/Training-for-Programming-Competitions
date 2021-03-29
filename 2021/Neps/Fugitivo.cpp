#include<bits/stdc++.h>

using namespace std;

int main () {
	long long X=0, Y=0, N, D, aux;
	char c;
	bool p = 0;
	cin >> N >> D;
	for(long long i = 0; i < N; i++) {
		cin >> c >> aux;
		//cout << c << aux << endl;
		if(c == 'N')
			Y += aux;
		if(c == 'O')
			X += aux;
		if(c == 'L')
			X -= aux;
		if(c == 'S')
			Y -= aux;
		//cout << X << " " << Y << endl;
		//cout << X*X + Y*Y << endl;
		if(X*X + Y*Y > D*D)
			p = 1;
	}
	cout << p << endl;
	return 0;
}

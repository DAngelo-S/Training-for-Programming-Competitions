#include<bits/stdc++.h>

using namespace std;

int main() {
	long long X, Y, Z;
	cin >> X >> Y >> Z;
	if(X < Y && Y < Z || (X+Y) < Z)
		cout << 1 << endl;
	else if ( (X < Y && Y == Z) || (X == Y && Y < Z) )
		cout << 2 << endl;
	else
		cout << 3 << endl;
	return 0;
}


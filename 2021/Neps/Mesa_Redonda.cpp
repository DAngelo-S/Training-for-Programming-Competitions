#include<bits/stdc++.h>

using namespace std;

int main () {
	bool cadeira[3];
	long long A, B;
	
	cin >> A >> B;

	cadeira[0] = cadeira[1] = cadeira[2] = 0;

	cadeira[A%3] = 1;
	
	if(A%3 == B%3) {
		cadeira[(B+1)%3] = 1;
	} else {
		cadeira[B%3] = 1;
	}
	
	for(long long i = 0; i < 3; i++)
		if(cadeira[i] == 0)
			cout << i << endl;

	return 0;
}

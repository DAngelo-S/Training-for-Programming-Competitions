#include<bits/stdc++.h>

using namespace std;

int main () {
	int N;
	cin >> N;
	if (N == 0)
		cout << "E";
	else if (N <= 35)
		cout << "D";
	else if (N <= 60)
		cout << "C";
	else if (N <= 85)
		cout << "B";
	else if (N <+ 100)
		cout << "A";
	cout << endl;
	return 0;
}

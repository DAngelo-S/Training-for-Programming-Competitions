#include<bits/stdc++.h>

using namespace std;

int main () {
	queue<char> A;
	queue<char> B;


	for(char i = 'A'; i <= 'P'; i++)
		A.push(i);

	int j1, j2;

	for(int i = 0; i < 8; i++) {
		cin >> j1 >> j2;
		if(j1 > j2) {
			B.push(A.front());
			A.pop();
			A.pop();
		} else {
			A.pop();
			B.push(A.front());
			A.pop();
		}
	}

	for(int i = 0; i < 4; i++) {
		cin >> j1 >> j2;
		if(j1 > j2) {
			A.push(B.front());
			B.pop();
			B.pop();
		} else {
			B.pop();
			A.push(B.front());
			B.pop();
		}
	}

	for(int i = 0; i < 2; i++) {
		cin >> j1 >> j2;
		if(j1 > j2) {
			B.push(A.front());
			A.pop();
			A.pop();
		} else {
			A.pop();
			B.push(A.front());
			A.pop();
		}
	}

	cin >> j1 >> j2;
	if(j1 > j2) {
		cout << B.front();
	} else {
		B.pop();
		cout << B.front();
	}

	cout << endl;

	return 0;
}

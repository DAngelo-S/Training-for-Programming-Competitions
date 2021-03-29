#include<bits/stdc++.h>

using namespace std;

int main () {
	int N, F, G;
	cin >> N >> F >> G;
	if (F >= N && G >= N) {
		cout << "Bora rangar";
	} else {
		cout << (F >= N ? 0 : N - F) + (G >= N ? 0 : N - G);
	}
	cout << endl;
	return 0;
}

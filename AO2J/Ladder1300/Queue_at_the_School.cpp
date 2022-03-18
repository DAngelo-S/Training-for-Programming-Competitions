#include <bits/stdc++.h>

using namespace std;

int main () {
	int n, t;
	string q;

	cin >> n >> t >> q;

	while (t) {
		t--;
		for (int i = 0; i + 1 < n; i++)
			if (q[i] == 'B' && q[i+1] == 'G') {
				q[i] = 'G';
				q[i+1] = 'B';
				i++;
			}
	}

	cout << q;
	return 0;
}

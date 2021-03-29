#include<bits/stdc++.h>

using namespace std;

int main () {
	int n, total=0, a=0, b=0, t = 1;
	char c;

	cin >> n;
	while (n) {
		cin >> a;
		total = a;
		for(int i = 1; i < n; i++) {
			cin >> c >> b;
			if(c == '+')
				total += b;
			else
				total -= b;
		}
		cout << "Teste " << t++ << endl << total << endl << endl;
		cin >> n;
	}
	return 0;
}

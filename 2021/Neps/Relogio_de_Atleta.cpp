#include<bits/stdc++.h>

using namespace std;

int main () {
	int R, F, C;

	cin >> R >> F >> C;

	if (F > 3*R || C < 95)
		cout << "diminuir" << endl;
	else if (F < 2*R && C > 97)
		cout << "aumentar" << endl;
	else
		cout << "manter" << endl;
	return 0;
}

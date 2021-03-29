#include<bits/stdc++.h>

using namespace std;

int main () {
	long long aux, CGol, FGol, C = 0, F = 0;
	cin >> aux;
	C = 3*aux;
	cin >> aux;
	C += aux;
	cin >> CGol;
	cin >> aux;
	F = 3*aux;
	cin >> aux;
	F += aux;
	cin >> FGol;
	if(C > F || (C == F && CGol > FGol))
		cout << "C";
	else if (F > C || (C == F && FGol > CGol))
		cout << "F";
	else
		cout << "=";
	cout << endl;
	return 0;
}

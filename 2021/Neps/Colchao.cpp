#include<bits/stdc++.h>

using namespace std;

int main () {
	int A, B, C, L, H;
	cin >> A >> B >> C >> L >> H;
	if( (A <= L && B <= H) || (A <= H && B <= L) || (A <= L && C <= H) || (A <= H && C <= L) || (B <= L && C <= H) || (B <= H && C <= L))
		cout << "S";
	else
		cout << "N";
	cout << endl;
	return 0;
}

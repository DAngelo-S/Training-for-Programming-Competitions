#include<bits/stdc++.h>

using namespace std;

int mdc (int a, int b) {
	if(b > a)
		return mdc(b, a);
	if(b == 0)
		return a;
	return mdc(b, a%b);
}

int main () {
	int a, b, c, resp;
	cin >> c >> a >> b;
	resp = mdc(a, b);
	if(a/resp <= c && b/resp <= c)
		cout << a/resp << " " << b/resp << endl;
	else
		cout << "IMPOSSIVEL" << endl;
	return 0;
}

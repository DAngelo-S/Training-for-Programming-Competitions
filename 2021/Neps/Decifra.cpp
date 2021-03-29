#include<bits/stdc++.h>

using namespace std;

string beta;

char troca (char letra) {
	return beta[letra-'a'];
}

int main () {
	string s;
	cin >> beta >> s;
	for(int i = 0; i < s.size(); i++)
		cout << troca(s[i]);
	cout << endl;
	return 0;
}

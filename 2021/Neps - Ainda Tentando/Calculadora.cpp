#include<bits/stdc++.h>

using namespace std;

int main () {
	int N, resp;
	float aux, total = 1;
	char c;
	cin >> N;
	for(int i = 0; i < N; i++) {
		cin >> aux >> c;
		if(c == '*')
			total = total * aux;
		else
			total = total / aux;
	}
	printf("%0.0f\n", total);
	return 0;
}

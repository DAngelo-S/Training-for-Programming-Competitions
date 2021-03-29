#include<bits/stdc++.h>

using namespace std;

int main() {
	int X1, Y1, X2, Y2, N, A, B, t = 1, cnt = 0;

	cin >> X1 >> Y1 >> X2 >> Y2;
	while( !(X1 == 0 && Y1 == 0 && X2 == 0 && Y2 == 0) ) {
		cnt = 0;
		cin >> N;
		for(int i = 0; i < N; i++) {
			cin >> A >> B;
			if(A >= X1 && A <= X2 && B >= Y2 && B <= Y1)
				cnt++;
		}
		cout << "Teste " << t++ << endl << cnt << endl << endl;
		cin >> X1 >> Y1 >> X2 >> Y2;
	}
	return 0;
}

#include<bits/stdc++.h>

using namespace std;

int main () {
	char s;
	long long pts[2], g[2], atual = 0, w = -1;
	bool fim = 0, t = 1;

	pts[0] = pts[1] = g[0] = g[1] = 0;

	s = getchar();
	while(s != '\n') {
		//cout << s << endl;
		if(s == 'S')
			pts[atual]++;
		if(s == 'R') {
			atual = (atual+1)%2;
			pts[atual]++;
		}
		
		if(pts[atual] >= 5 && pts[atual] - pts[(atual+1)%2] >= 2) {
			g[atual]++;
			pts[1] = pts[0] = 0;
		} else if (pts[atual] == 10) {
			g[atual]++;
			pts[1] = pts[0] = 0;
		}

		if(g[1] == 2)
			w = 1;
		if(g[0] == 2)
			w = 0;

		if(s == 'Q' && (w == -1 /* || i !- s.size() -1*/) ) {
			t = 0;
			if(atual == 0)
				cout << g[0] << " (" << pts[0] << "*) - " << g[1] << " (" << pts[1] << ")\n";
			else
				cout << g[0] << " (" << pts[0] << ") - " << g[1] << " (" << pts[1] << "*)\n";
	
		} else if (s == 'Q') {
			t = 0;
			if(w == 0)
				cout << g[0] << " (winner) - " << g[1] << endl;
			else
				cout << g[0] << " - " << g[1] << " (winner)\n";
		}
		s = getchar();
	}

	if(t)
		cout << endl;
	return 0;
}


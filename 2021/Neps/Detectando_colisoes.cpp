#include<bits/stdc++.h>

/* Explicação: http://spojtricks.blogspot.com/2015/08/19958-detectando-colisoes.html */

using namespace std;

int main () {
	long long a_x0, a_y0, a_x1, a_y1, b_x0, b_y0, b_x1, b_y1;
	cin >> a_x0 >> a_y0 >> a_x1 >> a_y1 >> b_x0 >> b_y0 >> b_x1 >> b_y1;
	
	cout << !( a_x1 < b_x0 || a_y1 < b_y0 || b_x1 < a_x0 || b_y1 < a_y0) << endl;

	return 0;
}

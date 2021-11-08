#include<bits/stdc++.h>

using namespace std;

//https://cp-algorithms.com/data_structures/segment_tree.html
//https://neps.academy/br/course/10/lesson/264

vector<int> segtree;
int N;

void update(long long value, int index, int node = 0, int i = 0, int j = N - 1) {
	if(i == j) {
		if(value > 0)	
			segtree[node] = 1;
		else if (value < 0)
			segtree[node] = -1;
		else
			segtree[node] = 0;
		return;
	}
	if(index <= (i+j)/2)
		update(value, index, 2*node+1, i, (i+j)/2);
	else
		update(value, index, 2*node+2, (i+j)/2+1, j);

	segtree[node] = segtree[2*node+1] * segtree[2*node+2];
}

int query (int a, int b, int node = 0, int i = 0, int j = N - 1) {
	if(a > j || b < i)
		return 1;
	
	if(a == i && b == j) {
		return segtree[node];
	}

	return query(a, min(b, (i+j)/2), 2*node+1, i, (i+j)/2) * query(max(a, (i+j)/2+1), b, 2*node+2, (i+j)/2+1, j);
}

int main () {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int x, a, b, q;
	char c;

	while(cin >> N) {
		cin >> q;
		segtree.resize(4*N);

		for(int i = 0; i < N; i++) {
			cin >> x;
			update(x, i);
		}
	
		for(int i = 0; i < q; i++) {
			cin >> c >> a >> b;
			if(c == 'C') {
				update(b, a-1);
			} else {
				a = query(a-1, b-1);
				if(a > 0)
					cout << '+';
				else if (a < 0)
					cout << '-';
				else
					cout << '0';
			}
		}

		cout << endl;
		segtree.clear();
	}
	return 0;
}

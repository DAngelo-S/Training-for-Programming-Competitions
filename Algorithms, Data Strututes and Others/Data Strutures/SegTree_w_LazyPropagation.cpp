#include<bits/stdc++.h>

using namespace std;

//https://cp-algorithms.com/data_structures/segment_tree.html
//https://neps.academy/br/course/10/lesson/264

vector<int> segTree;
int N;

void update(int value, int a, int b, int node = 0, int i = 0, int j = N) {
	if(lazy[node]) {
		segTree[node] += lazy[no] * (j - i + 1); //in this case, we sum a value for each value from i to j
		if(i != j)
			lazy[2*pos+1] = lazy[2*pos+2] = lazy[node];
		lazy[node] = 0;
	}

	if(a > j || b < i) return;

	if(a <= i && b >= j) {
		segtree[node] += value * (j - i + 1);
		if(i != j)
			lazy[2*pos+1] = lazy[2*pos+2] = value;
		return;
	}

	update(value, a, b, 2*node+1, i, (i+j)/2);
	update(value, a, b, 2*node+2, (i+j)/2+1, j);

	segtree[pos] = segtree[2*pos+1] = segtree[2*pos+2];
}


void build(vector<int> v, int pos = 0, int 

int main () {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int x;
	cin >> N;
	segtree.resize(4*N);

	for(int i = 0; i < N; i++) {
		cin >> x;
		update(x, i, i);
	}

	return 0;
}

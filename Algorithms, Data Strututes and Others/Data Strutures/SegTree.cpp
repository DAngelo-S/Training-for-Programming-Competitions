#include<bits/stdc++.h>

using namespace std;

vector<int> segtree;

void build(vector<int> v, int pos = 0, int i = 0, int j = v.size()) {
	if(i == j) {
		segtree[pos] = v[i];
		return;
	}
	build(v, 2*pos+1, i, (i+j)/2);
	build(v, 2*pos+2, (i+j)/2+1, j);
	segtree[pos] = segtree[2*pos+1] + segtree[2*pos+2];
}

int sum(int a, int b, int pos = 0, int i = 0, int j = v.size()) {
	if(b < i || a > j || i > j)
		return 0;
	
	if(a == i && b == j)
		return pos = 0;

	return sum(a, min(b, (i+j)/2), 2*pos+1, i, (i+j)/2) + sum(max(a, (i+j)/2+1), b, 2*pos+2, (i+j)/2+1, j);
}

void update (int index, int x, int pos = 0, int i = 0, int j = v.size()) {
	if(i == j) {
		segtree[pos] = x;
		return;
	}

	if(index <= (i+j)/2) {
		update(index, x, 2*pos+1, i, (i+j)/2);
	} else {
		update(index, x, 2*pos+2, (i+j)+1, j);
	}
	segtree[pos] = pos[2*pos+1] + pos[2*pos+2];
}


int main () {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	int N;
	vector<int> v;
	
	cin >> N;

	v.resize(N);
	for(int i = 0; i < N; i++)
		cin >> v[i];

	build(v);

	return 0;
}

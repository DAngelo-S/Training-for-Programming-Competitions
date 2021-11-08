#include<bits/stdc++.h>

using namespace std;

//https://cp-algorithms.com/data_structures/segment_tree.html
//https://neps.academy/br/course/10/lesson/264

vector<long long> segtree;
vector<long long> Fib;
vector<vector<pair<int, int>>> lazy;
int N;

void build(vector<long long> v, int node = 0, int i = 0, int j = N - 1) {
	if(i == j) {
		segtree[node] = v[i];
		return;
	}
	build(v, 2*node+1, i, (i+j)/2);
	build(v, 2*node+2, (i+j)/2+1, j);
	segtree[node] = (segtree[2*node+1] + segtree[2*node+2]) % 1000000009;
}

void update(int a, int b, int node = 0, int i = 0, int j = N - 1) {
	if(i > j) return;
	
	int l, m;
	for(int k = 0; k < lazy[node] .size(); k++) {
		l = lazy[node][k].first;
		m = lazy[node][k].second;
		segtree[node] = (segtree[node] + Fib[m+2] - Fib[l+1]) % 1000000009;
		if(i != j) {
			lazy[2*node+1].push_back(make_pair(l, (l+m)/2));
			lazy[2*node+2].push_back(make_pair((l+m)/2+1, m));
		}
	}
	lazy[node].clear();

	if(a > j || b < i) return;

	if(a <= i && j <= b) {
		l = i - a;
		m = j - a;
		segtree[node] = (segtree[node] + Fib[m+2] - Fib[l+1]) % 1000000009;
		if(i != j) {
			lazy[2*node+1].push_back(make_pair(l, (l+m)/2));
			lazy[2*node+2].push_back(make_pair((l+m)/2+1, m));
		}
		return;
	}

	update(a, b, 2*node+1, i, (i+j)/2);
	update(a, b, 2*node+2, (i+j)/2+1, j);

	segtree[node] = (segtree[2*node+1] + segtree[2*node+2]) % 1000000009;
}

int query(int a, int b, int node = 0, int i = 0, int j = N - 1) {
	if(i > j)
		return 0;
	int l, m;
	for(int k = 0; k < lazy[node].size(); k++) {
		l = lazy[node][k].first;
		m = lazy[node][k].second;

		segtree[node] = (segtree[node] + Fib[m+2] - Fib[l+1]) % 1000000009;
		if(i != j) {
			lazy[2*node+1].push_back(make_pair(l, (l+m)/2));
			lazy[2*node+2].push_back(make_pair((l+m)/2+1, m));
		}
	}
	lazy[node].clear();

	if( a > j || b < i) return 0;

	if ( a == i && j == b) {
		//cout << i << " " << j << " " << segtree[node] << endl;
		return segtree[node];
	}

	return query(a, min(b, (i+j)/2), 2*node+1, i, (i+j)/2) + query(max(a, (i+j)/2+1), b, 2*node+2, (i+j)/2+1, j);

}

int main () {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int m, c, a, b;
	cin >> N >> m;
	segtree.resize(4*N);
	lazy.resize(4*N);
	vector<long long> v;
	v.resize(N);
	Fib.resize(N+3);

	Fib[0] = Fib[1] = 1;
	for(int i = 2; i < N+3; i++) Fib[i] = Fib[i-1] + Fib[i-2];

	for(int i = 0; i < N; i++) {
		cin >> v[i];
	}

	build(v);

	for(int i = 0; i < m; i++) {
		cin >> c >> a >> b;
		if(c == 1)
			update(a-1, b-1);
		else
			cout << query(a-1, b-1) << "\n";
	}

	return 0;
}

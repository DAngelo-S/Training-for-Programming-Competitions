#include<bits/stdc++.h>

using namespace std;

int main () {
	int N, v[100001], cnt = 0;
	set<int> aux;
	
	cin >> N;
	for(int i = 0; i < N; i++) {
		cin >> v[i];
		aux.insert(-v[i]);	
	}
	
	for(int i = N-1; i > 0; i--) {
		aux.erase(-v[i]);
		for(set<int>::iterator it = aux.begin(); it != aux.end(); ++it) {
			//cout << -*it << " ";
			if(-*it > v[i])
				cnt++;
			else
				break;
		}
	}
	
	cout << cnt << endl;
	return 0;
}


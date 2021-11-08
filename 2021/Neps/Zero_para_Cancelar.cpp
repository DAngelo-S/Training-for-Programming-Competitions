#include<bits/stdc++.h>

using namespace std;

int main() {
    stack<long long> s;
    long long sum = 0, aux, n;

    cin >> n;

    while(n) {
	cin >> aux;
	if (aux) {
	    s.push(aux);
	    sum += aux;
	} else {
	    sum -= s.top();
	    s.pop();
	}
	n--;
    }
    cout << sum << endl;
}

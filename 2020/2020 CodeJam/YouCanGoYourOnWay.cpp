#include<bits/stdc++.h>

using namespace std;

int main() {

    string L, M;
    int T, S;

	cin >> T;
    
    for(int i=0; i<T; i++) {
        cin >> S;
        cin >> L;
        M = L;
        for(int j=0; j<L.size(); j++) {
            if (L[j] == 'E')
                M[j] = 'S';
            else
                M[j] = 'E';
        }
	cout << "Case #" << (i+1) << ": " << M << "\n";
    }
    
    return 0;
    
}

#include <bits/stdc++.h>

using namespace std;

//19:
//r 12
//t 14
//c 15
//d 18
//f 18

int main() {
    
    int n, c=0, ant=0, atual;
    
    cin >> n;
    
    for(int i=0; i<n; i++) {
        cin >> atual;
        if (atual != ant) c++;
        ant = atual;
    }
    
    if (atual != ant) c++;
    
    cout << c << "\n";

    return 0;
}

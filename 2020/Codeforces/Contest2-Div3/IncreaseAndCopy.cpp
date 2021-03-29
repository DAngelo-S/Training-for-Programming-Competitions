#include<bits/stdc++.h>

using namespace std;

int main () {
    long long T, mov, menor, A;
    cin >> T;
    
    for(int t=0; t< T; t++) {
        cin >> A;
        mov = A - 1;
        menor = mov;
        for(int i = sqrt(A); i > 0; i--) { //pq??
            mov = i - 1 + A / i - 1;
            if (A % i != 0)
                mov++;
            if (mov < menor)
                menor = mov;
        }
        cout << menor << endl;
    }
}

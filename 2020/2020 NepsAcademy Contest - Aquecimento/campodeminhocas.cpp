#include<bits/stdc++.h>

//https://neps.academy/contest/216/problem/622

using namespace std;

int main() {
    
    int N, M, V[100][100], soma=0, soma_aux=0;
    
    cin >> N >> M;
    
    for(int i=0; i<N; i++) {
        for(int j=0; j<M; j++) {
            cin >> V[i][j];
        }
    }
    
    for(int i=0; i<N; i++) {
        soma_aux = 0;
        for(int j=0; j<M; j++) {
            soma_aux += V[i][j];
        }
        if (soma_aux > soma)
            soma = soma_aux;
    }
    
    for(int i=0; i<M; i++) {
        soma_aux = 0;
        for(int j=0; j<N; j++) {
            soma_aux += V[j][i];
        }
        if (soma_aux > soma)
            soma = soma_aux;
    }
    
    cout << soma << "\n";
    
    return 0;

}

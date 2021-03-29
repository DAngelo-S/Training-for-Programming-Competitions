#include<bits/stdc++.h>

using namespace std;

int buscabi (int chave, int i, int f, int v[]) {

    if (i>f) return -1;
    int meio = (i+f)/2;
    if (v[meio] > chave) return buscabi(chave, i, meio-1, v);
    if (v[meio] == chave) return meio;
    if (v[meio] < chave) return buscabi(chave, meio+1, f, v);

}

void insere (int n, int t, int v[]) {

    for(int i=0; i<t; i++) {
        if (v[i] == 0) {
            v[i] = n;
            return;
        } else if (v[i] > n) {
            for(int j=t; j>i; j--) {
                v[j] = v[j-1];
            }
            v[i] = n;
            return;
        }
    }

}

void remove (int t, int p, int v[]) {

    for(int j=p; j<t-1; j++) v[j] = v[j+1];
    v[t] = 0;
    
    return;

}

int main() {

    int V[11], a;
    
    for(int i=0; i<10; i++) V[i] = 0;
    
    for(int i=0; i<3; i++) {
        cin >> a;
        insere(a, i+1, V);
    }
    
    for(int i=0; i<3; i++) cout << V[i] << " ";

}

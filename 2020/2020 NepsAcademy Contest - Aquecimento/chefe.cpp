#include<bits/stdc++.h>

//https://neps.academy/contest/216/problem/18
//TLE

using namespace std;

int buscabi (int chave, int i, int f, int v[]) {

    if (i>f) return -1;
    int meio = (i+f)/2;
    if (v[meio] > chave) return buscabi(chave, i, meio-1, v);
    if (v[meio] == chave) return meio;
    if (v[meio] < chave) return buscabi(chave, meio+1, f, v);
    return -1;    
}

void insere (int n, int t, int v[]) {

    for(int i=0; i<t; i++) {
        if (v[i] == -1) {
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

    for(int j=p; j<t; j++) v[j] = v[j+1];
    v[t] = -1;
    
    return;

}

void troca (int v[501][501], int tam[501], int n, int a, int b) {

    int aux[501], aux_tam = tam[b], j;
    
    for(int i = 0; i < tam[b]; i++) {
        aux[i] = v[b][i];
    }
    
    for(int i = 0; i<tam[a]; i++) {
        v[b][i] = v[a][i];
    }
    
    tam[b] = tam[a];
    
    for(int i = 0; i<aux_tam; i++) {
        v[a][i] = aux[i];
    }
    
    tam[a] = aux_tam;
    
    for(int i=0; i<n; i++) {
        j = buscabi(a, 0, tam[i]-1, v[i]);
        if (j!=-1) {
            remove(tam[i], j, v[i]);
            insere(b, tam[i], v[i]);
        } else {
           j = buscabi(b, 0, tam[i]-1, v[i]);
           if (j!=-1) {
               remove(tam[i], j, v[i]);
               insere(a, tam[i], v[i]);
           }
        }
    }
    
    return;
    
}

int procura (int v[501][501], int tam[501], int idade[501], int a, int menor) {
    
    for(int i=0; i<tam[a]; i++) {
        if (idade[v[a][i]] < menor) {
            menor = idade[v[a][i]];
        }
        menor = procura(v, tam, idade, v[a][i], menor);
    }
    
    return menor;
    
}

int main() {

    ios::sync_with_stdio(0);
    cin.tie(0);

    int v[501][501], tam[501], idade[501], N, M, I, a, b;
    char c;
    
    cin >> N >> M >> I;
    
    for(int i=0; i<500; i++) {
        tam[i] = idade[i] = 0;
        for(int j=i; j<500; j++) {
            v[i][j] = v[j][i] = -1;
        }
    }
    
    for(int i=0; i<N; i++) {
        cin >> idade[i];
    }
    
    for(int i=0; i<M; i++) {
        cin >> a >> b; //a gerencia b
        insere(a-1, ++tam[b-1], v[b-1]);
    }
    
    for(int i=0; i<I; i++) {
        
        cin >> c >> a;
        if (c == 'P') {
            b = procura(v, tam, idade, a-1, 101);
            if (b == 101)
                cout << "*\n";
            else
                cout << b << "\n";
        } else {
            cin >> b;
            troca(v, tam, N, a-1, b-1);
            
        }
    }
    
    return 0;

}

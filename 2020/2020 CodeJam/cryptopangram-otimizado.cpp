#include<bits/stdc++.h>

using namespace std;

/*
Este programa recebe T testes;
Para cada teste, lê L números, representando o produto de 2 primos
Cada primo, representa uma letra do alfabeto.
Necessariamente haveram 26 primos, cada primo representara uma letra, do menor para o maior.
O programa imprimirá a frase desencriptada.
*/

//Funcao mdc usada para encontrar o primo
double mdc (double a, double b) {

    if (a == 0)
        return b;
    if (b == 0)
        return a;
    if (a < b)
        return mdc(a, b-a);
    if (b < a)
        return mdc(a-b, b);

    return -1;

}

//Funcao para encontrar os primos da ponta
double ponta (double n, double p) {
    double cont=0;

    double aux;
    if (p>n) {
        aux = p;
        p = n;
        n = aux;
    }

    while (n!=0){
        cont++;
        n -= p;
    }

    return cont;
}

//Insere, de forma ordenada, os primos - pensado para inserir em Alpha[]
void insere (double n, double v[]) {

    for(int i=0; i<26; i++) {
        if(v[i] == -1) {
            v[i] = n;
            return;
        } else if (v[i] == n) {
            return;
        } else if (v[i] > n) {
            for(int j = 25; j>i; j--) v[j] = v[j-1];
            v[i] = n;
            return;
        }
    }

}

//buscar a posicao do elemento n no vetor v - pensado para buscar em Alpha[]
int busca (double n, double v[]) {


    int i = 25;

    for(i=25; i>0; i--) {
        if (v[i] == n) break;
    }

    return i;
}

int main() {

    int T=0; // valor maximo: 100
    int L=0; // valor maximo: 100
    double N=0; //valor maximo: 10^100
    double F[100]; //lista de produtos; valor max de cada produto: 10^200
    double FD[101]; //Lista das letras encriptadas na frase
    double Alpha[26]; //Valores dos primos correspondentes a cada letra, valor maximo: 10^100
    int aux=0;

    cin >> T;

    for(int i=0; i<T; i++) {

        for(int j=0; j<26; j++) Alpha[j] = -1;

        cin >> N;
        cin >> L;

        for(int j=0; j<L; j++) {
            cin >> F[j];
        }
        cout << "oi";

        for(int j=1; j<L; j++) {
            FD[j] = mdc(F[j-1], F[j]);
            insere(FD[j], Alpha);
        }

        FD[0] = ponta(F[0], FD[1]);
        FD[L] = ponta(F[L-1], FD[L-1]);
        insere(FD[0], Alpha);
        insere(FD[L], Alpha);

        cout << "Case #" << (i+1) << ": ";
        for(int j=0; j<=L; j++) {
            aux = busca(FD[j], Alpha);
            printf("%c", ('A'+aux));
        }
        cout << "\n";

    }

    return 0;

}

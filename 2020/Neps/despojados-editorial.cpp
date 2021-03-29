#include<bits/stdc++.h>

using namespace std;


int main() {
        long long valor=0, divisores_primos=0, candidato=3, raiz=0;
        
        cin >> valor;
        
        raiz = sqrt(valor);
        
        if (valor % 2 == 0) {
            divisores_primos++;
            while (valor % 2 == 0) valor /= 2;
        }

        while(valor > 1 && candidato <= raiz) { //max:10^6
                 if (valor % candidato == 0) {
                     divisores_primos++;
                     while (valor % candidato == 0) valor /= candidato; // max:40
                 }
                 candidato += 2;
        } // O(10^7) no pior caso < 1 seg
        
        if (valor > 1) divisores_primos++;
        
        cout << pow(2, divisores_primos) - divisores_primos - 1 << "\n";

        return 0;
}

#include<bits/stdc++.h>
#include<math.h>

using namespace std;

vector<long long> l_primos;

bool primo(long long n) {
        for(long long i = 0; i<l_primos.size() && l_primos[i]<=n/l_primos[i] + 1; i++) {
                if (n % l_primos[i] == 0)
                        return false;
        }
        l_primos.push_back(n);
        return true;
}

int main() {
        long long valor=0, raiz;

        cin>>valor;
        
        raiz = sqrt(valor);

        if(valor>=2) {
                l_primos.push_back(2);
                if (valor % 2 == 0) {
                    divisores_primos++;
                }
                while (valor % 2 == 0) valor /= 2;
        }

        for(long long i=3; i<=raiz; i += 2) {
                if(primo(i)) {
                    if (valor % i == 0) {
                        divisores_primos++;
                        while (valor % i == 0) valor /= i;
                    }
                }
        }
        
        if (valor > 1) divisores_primos++;

        return 0;
}

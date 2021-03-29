#include<bits/stdc++.h>

using namespace std;

//inicio: 10
//r 26
//t 28
//c 29
//d 36
//f 52

//sub: 6

//prestar atenção em todos os casos possíveis da string!! Inicio, meio e fim!! Principalmente o inicio e o fim

bool ehWUB(int i, string s) {
    if(s[i] == 'W' && s[i+1] == 'U' && s[i+2] == 'B')
        return true;
    return false;
}

int main() {
    
    int c = 0, inicio=0, fim=0;
    string s;
    
    cin >> s;
    
    fim = s.size()-1;
    
    while(ehWUB(inicio, s)) {
        inicio+=3;
    }
    
    if (ehWUB(fim-2, s)){
        c = 1;
        fim=fim-2;
        while(ehWUB(fim-3, s)){
            fim-=3;
        }
    }
    
    if (c == 1) {
        fim--;
        c = 0;
    }
    
    cout << s[inicio];
    
    for(int i=inicio+1; i<=fim; i++) {
        if(ehWUB(i, s)) {
            if (c == 0)
                cout << " ";
            i+=2;
            c = 1;
        } else {
            cout << s[i];
            c = 0;
        }
    }
    
    cout << "\n";
    
    return 0;
}

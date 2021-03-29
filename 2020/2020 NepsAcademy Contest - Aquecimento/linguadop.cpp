#include<bits/stdc++.h>

//https://neps.academy/contest/216/problem/389
//AC

using namespace std;

int main () {

    string frase, descrip;
    
    getline(cin, frase);
    
    for(int i=0; i<frase.size(); i++) {
        if(frase[i] == 'p') {
            descrip += frase[++i];
        }
        if (frase[i] == ' ') {
            descrip += ' ';
        }
    }
    
    cout << descrip << "\n";
    
    return 0;

}

#include<bits//stdc++.h>

#define MAXN 100000

using namespace std;

int B, L, D;
vector <int> WhereIs[MAXN];
vector <int> Score[MAXN];

typedef struct book{
    
    int id;
    int score;

};

typedef struct library {

    int lBooks;
    vector <book> Books[lBooks];
    int Sign;
    int BooksPerDay;
    vector <int> lBestScore[lBooks] //total de pontos desde o sign em x dias
    int Used = 0;
    vector <book> teste[lBooks];
    memset(teste, 0, lBooks);
    memset(Books, 0, lBooks);
    
};

library Library[MAXN];

void calculaScoreDia (int i) {

    for(int j=0; j<Library[i].Sign; j++) { //nos dias que loga, nao tem score
        Library[i].lBestScore[j] = 0;
    }
    
    for(int j=0; j<Library[i].lBooks; j++) {  //copia os livros no "teste" para que se possa excluir livros livremente
        Library.teste[i] = Library.Books[i];
    }
    
    sort(Library[i].teste, Library.lBooks, myfunction); //ordena os scores (corrigir o sort)
    
    int aux1 = 0; //começa no livro 0
    
    for(int j=Library[i].Sign; j<D; j++) { //começa no dia seguinte apos o sign     j = dia
        Library[i].lBestScore[j] = Library[i].lBestScore[j-1]; //acumula os pontos;
        int k;
        for(k=aux1; k<aux1+Library[i].BooksPerDay; k++) { //soma os livros por dia  k = livro
            Library[i].lBestScore[j] += Library[i].teste[k]; //soma
        }
        aux1 = k; //termina no livro aux1+k-1, o prox começa no aux1+k 
    }
    
    //calculei quantos pontos terei obtido no dia x apos escolher a library[i]
    
}

bool myfunction (book i, book j) {return i.score>j.score}

int bestForEach(int i, int dia) {
    
    int x = 0, y = 0, z = 0;
    
    if (Library[i].Used == 1)
        return 0;
    
    calculaScoreDia(i);    
    
    for(int j=0; j<Library[i].Books; j++) {
        for(int k=0; k<WhereIs[Library[i].Book[j].id].size; k++) {
            erase(
            // erase the first 3 elements:
            for(int m=0; m<B; m++) {
                if (Library[WhereIs[Library[i].Book[j].id][k]].teste[m].id == Library[i].Book[j].id)
                    Library[WhereIs[Library[i].Book[j].id][k]].teste.erase(Library[WhereIs[Library[i].Book[j].id][k]].teste.begin(), Library[WhereIs[Library[i].Book[j].id][k]].teste.begin()+m);
            }
        }
    }
    
    Library[i].Used == 1;
    dia -= Library[i].Sign
    if (dia>=0) {
        x = Library[i].lBestScore[dia+Library[i].Sign];
    } else {
        return 0;
    }
    
    y = bestForEach(0, dia);
    for(int j = 1; j<L; j+2) {
        z = bestForEach(j, dia);
        if (z > y)
            y = z;
    }
    
    return x + y;
}


int main() {

    cin >> B >> L >> D;
    for(int i=0; i<B; i++) {
        cin >> Score[i];
    }

    for(int i=0; i<L; i++) {
        cin >> Library[i].lBooks;
        cin >> Library[i].Sign;
        cin >> Library[i].BooksPerDay;
        for (int k=0; k<Library[i].lBooks; k++) {
            cin >> Library[i].Books[k].id;
            Library[i].Books[k].score = Score[Library[i].Books[k].id];
        }
    }     
    
    int x = bestForEach(0, D), y = 0;
    for(int i=1; i<L; i++) {
        y = bestForEach(i, D);
        if (y > x) x = y;
    }
     
    cout << x;
}

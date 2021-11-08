// Vector

vector<int> V; //criação
V.push_back(10); //inserção
for(int i = 0; i < (int)v.size(); i++) //percorre
V.resize(10); //muda o tamanho para 10
V.pop_back(); //Apaga o ultimo elemento
V.clear(); //Limpa o vetor
sort(V.begin(), V.end()); //ordena

// Pair

pair<string, int> P; //criação
cin >> P.first >> P.second;

pair<int, pair<int, int>> Q;
p.first = 1;
p.second.first = 2;
p.second.second = 3;

vector<pair<int, int>> V;
sort(V.begin(), V.end()); //Ordena o vetor utilizando o comparador de desigualdade do pair, ou seja, primeiro compara pelo first e em caso de empate compara pelo second.
V.push_back(make_pair(a, b));

// Queue

queue<int> fila; //criação
fila.push(10); //insere no final
fila.pop(); //remove o da frente
int p = fila.front(); // mostra a frente;

// Stack

stack<int> pilha; //criação
pilha.push(10);
pilha.pop();
pilha.top();

// Set

set<int> S;
S.insert(10);
if(S.find(3) != S.end())
	cout << "Existe!" << endl;
S.erase(10);
S.clear();
S.size();
for (set<int>::iterator it=S.begin(); it!=S.end(); ++it){
      cout << *it << " ";
}

// Map

map<string, int> M;
M.insert(make_pair("Alana", 10)); //metodo de inserção 1
M["Alana"] = 10; //metodo de insercao 2
if(M.find("Alana") != M.end())
	cout << "Existe!";
M.erase("Alana");
for (map<string,int>::iterator it=M.begin(); it!=M.end(); ++it){
	cout<< "("<< it->first<< ", "<< it->second<< ") ";
}

// Union-Find

#define MAXN 100100

int pai[MAXN];

int find(int x){
    if(pai[x]==x) return x;
    return find(pai[x]);
}

void join(int x, int y){
    pai[find(x)]=find(y);
}

// Priority Queue
// tira o com maior valor primeiro

priority_queue <int> pq;
int tmp = pq.top();
pq.pop();
pq.push(5);



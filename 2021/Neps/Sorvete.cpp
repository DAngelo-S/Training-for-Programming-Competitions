/*
Inicio: 
Terminou de ler: 
Terminou de pensar sobre: 
Terminou de codar: 
Terminou de debuggar: 
Submits:  
*/

#include<bits/stdc++.h>
#include<string>

using namespace std;

#define MAXN 10000

typedef struct {
	long long ini;
	long long fim;
} distancia;

bool compara (distancia a, distancia b) {
	return (a.ini < b.ini);
}

int main() {
        long long p, s;
        distancia d[MAXN];

        cin >> p >> s;

        for(long long i = 0; i < s; i++)
                cin >> d[i].ini >> d[i].fim;

	sort(d, d+s, compara);
	
        for(long long i = 0; i < s-1; i++) {
                if(d[i].ini == -1)
                        continue;
                for(long long j = i + 1; j < s; j++) {
                        if(d[j].ini == -1)
                                continue;
                        if(d[j].ini <= d[i].fim && d[j].ini >= d[i].ini) {
                                d[j].ini = -1;
                                if (d[j].fim > d[i].fim)
                                        d[i].fim = d[j].fim;
                                d[j].fim = -1;
                        }
                        else if (d[j].fim <= d[i].fim && d[j].fim >= d[i].ini) {
                                d[j].fim = -1;
                                if(d[j].ini < d[i].ini)
                                        d[i].ini = d[j].ini;
                                d[j].ini = -1;
                        }
                }
        }

        for(long long i = 0; i < s; i++) {
                if(d[i].ini == -1)
                        continue;
                cout << d[i].ini << " " << d[i].fim << endl;
        }

        return 0;
}

// getline(cin, str);
// a = (b==c?d:a);
// cout << setprecision(12) << fixed;
// vector <int> v;

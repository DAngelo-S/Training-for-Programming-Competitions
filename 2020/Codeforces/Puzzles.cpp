#include <bits/stdc++.h>

using namespace std;

/*
inicio: 21:18
r: 21
t: 21
c: 
d: 
f: 30

submits: 1 

http://codeforces.com/problemset/problem/337/A

*/

int main() {
    int n, m, menor=10000;
    scanf("%d %d", &n, &m);
    int v[m];
    for(int i=0; i<m; i++)
        scanf("%d", &v[i]);
    
    sort(v, v+m);
    
    for(int i=0; i<m-n+1; i++) {
        //printf("%d %d\n", v[n+i-1], v[i]);
        if (v[n+i-1] - v[i] < menor) 
            menor = v[n+i-1] - v[i];
    }
    
    printf("%d\n", menor);
    
    return 0;
}

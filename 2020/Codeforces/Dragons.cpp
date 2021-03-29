#include <bits/stdc++.h>

using namespace std;

/*
inicio: 20:02
r: 05
t: 
c: 23
d: 
f: 13

submits: 3 

http://codeforces.com/problemset/problem/230/A

*/

struct dragao {
    int x;
    int y;
};

typedef struct dragao dragao;

bool compare (dragao a, dragao b) {
    if (a.y != b.y)
        return a.y > b.y;
    return a.x < b.x;
}

int remove (dragao * d, int a, int n) {
     for(int i=a; i<n-1; i++) {
        d[i].x = d[i+1].x;
        d[i].y = d[i+1].y;
    }
    n--;
    return n;
}

int main() {
    int n, s, maior;
    dragao drag[10000];
    bool venceu = true;
    
    scanf("%d %d", &s, &n);
    for(int i=0; i<n; i++)
        scanf("%d %d", &drag[i].x, &drag[i].y);
    sort(drag, drag+n, compare);
    
    int aux = n;
    for(int i=0; i<aux; i++) {
        for(int j=0; j<n; j++) {
            if (s > drag[j].x) {
                //printf("%d: %d %d\n", i, s, drag[j].x);
                s += drag[j].y;
                n = remove(drag, j, n);
            }
        }
    }
    
    if (n==0)
        printf("YES\n");
    else
        printf("NO\n");
    
    return 0;
}

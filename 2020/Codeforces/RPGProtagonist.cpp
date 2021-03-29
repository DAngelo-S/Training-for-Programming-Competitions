#include<bits/stdc++.h>

using namespace std;

int main () {

    long long t, p, f, cs, cw, s, w;
    long long c=0, c1=0;
    long long max1, max2, aux1, aux2, ga=0, gb=0, gcs, gcw;
    
    
    cin >> t;
    
    for(long long i=0; i<t; i++) {
        cin >> p >> f;
        cin >> cs >> cw;
        cin >> s >> w;
        
        gcs = cs;
        gcw = cw;
        
        c = aux1 = aux2 = ga = gb = 0;
        
        max1 = p/s;
        if (max1 > cs) max1 = cs;
        
        for(int a=0; a<=max1; a++) {
            
            max2 = (p-a*s)/w;
            if (max2 > cw) max2 = cw;
            
            aux2 = a+max2;
            
            if (aux2 > aux1) {
               aux1 = aux2;
               ga=a;
               gb=max2;
           }
           
        }
        
        c += aux1;
        
        aux1 = aux2 = 0;
        cs-=ga;
        cw-=gb;
        
        max1 = f/s;
        if (max1 > cs) max1 = cs;
        
        for(int a=0; a<=max1; a++) {
            
            max2 = (f-a*s)/w;
            if (max2 > cw) max2 = cw;
            
            aux2 = a+max2;
            
            if (aux2 > aux1) {
               aux1 = aux2;
               ga=a;
               gb=max2;
           }
           
        }
        
        c += aux1;
        
        c1 = aux1 = aux2 = ga = gb = 0;
        
        max1 = p/s;
        if (max1 > gcs) max1 = gcs;
        
        for(int a=0; a<=max1; a++) {
            
            max2 = (p-a*s)/w;
            if (max2 > gcw) max2 = gcw;
            
            aux2 = a+max2;
            
            if (aux2 > aux1) {
               aux1 = aux2;
               ga=a;
               gb=max2;
           }
           
        }
        
        c1 += aux1;
        
        aux1 = aux2 = 0;
        gcs-=ga;
        gcw-=gb;
        
        max1 = f/s;
        if (max1 > cs) max1 = cs;
        
        for(int a=0; a<=max1; a++) {
            
            max2 = (f-a*s)/w;
            if (max2 > gcw) max2 = gcw;
            
            aux2 = a+max2;
            
            if (aux2 > aux1) {
               aux1 = aux2;
           }
           
        }
        
        c1 += aux1;
        
        cout << max(c1, c) << endl;
        
    }

    return 0;
}

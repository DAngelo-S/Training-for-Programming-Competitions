#include<bits/stdc++.h>

using namespace std;

long long corta(vector<long long> P, long long i, long long f, long long n, long long d) {
    long long cut=0;
    for(int a=i; a<f && d>0; a++) {
        if(P[a]%n == 0) {
            while(d>0 && P[a]>n){
                cut++;
                d--;
                P[i] -= n;
            } if (P[a] == n) {
                d--;
            }
        }
    }
    for(int a=f-1; a>=i; a--) {
        while(P[a]>n && d>0) {
            cut++;
            d--;
            P[a] -= n;
        }
    }
    
    if (d>0) return -1;
    return cut;
}

int main () {

    long long T, S, d, rep=1, a, i, j, k=-1, kmenor = -1;
    vector<long long> P;
    
    cin >> T;
    
    for(int t=0; t<T; t++) {
        
        cin >> S >> d;
        for(int i=0; i<S; i++) {
            cin >> a;
            P.push_back(a);
        }
        sort(P.begin(), P.end());
        
        for(i=0; i<P.size(); i++) {
            for(j=i+1; j<P.size(); j++) {
                if (P[i] == P[j]) {
                    rep++;
                } else {
                    break;
                }
            }
            k = corta(P, j, P.size(), P[i], (d-rep));
            cout << k << "\n";
            if (k != -1) {
                if (k < kmenor) {
                    kmenor = k;
                }
            }
            rep = 1;
            k = -1;
        }
        if (kmenor == -1) {
            kmenor = d-1;
        }
        cout << "Case #" << t+1 << ": " << kmenor << "\n";
        kmenor = -1;
    }

    return 0;

}

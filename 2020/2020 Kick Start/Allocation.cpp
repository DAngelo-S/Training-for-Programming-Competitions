#include<bits/stdc++.h>

using namespace std;

int main () {

    int N, B, T, a, i=0;
    vector<int> v;
    
    cin >> T;
    
    for(int t=0; t<T; t++) {
    
        cin >> N >> B;
    
        for(i=0; i<N; i++) {
            cin >> a;
            v.push_back(a);
        }
        
        sort(v.begin(), v.end());
        
        i = 0;
        while (v[i]<=B && i < N) {
            B-=v[i++];
        }
        
        cout << "Case #" << t+1 << ": " << i << "\n";
        v.clear();
    
    }
    
    return 0;

}

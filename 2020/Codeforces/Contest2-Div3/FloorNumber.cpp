#include<bits/stdc++.h>

using namespace std;

int main () {
    long long T, n, x, cnt;
    cin >> T;
    
    for(int t = 0; t < T; t++) {
        cnt = 0;
        cin >> n >> x;
        
        if (n <= 2)
            cnt = 1;
        else {
            n = n - 2;
        
            cnt = 1 + n/x;
        
            if (n % x != 0)
                cnt++;
        }
        cout << cnt << "\n";
    }
}

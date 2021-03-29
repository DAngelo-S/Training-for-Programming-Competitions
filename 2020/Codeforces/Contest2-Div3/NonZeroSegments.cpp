#include<bits/stdc++.h>

using namespace std;

int main () {
    long long n, s, cnt=0;
    cin >> n;
    long long v[1000000];
    for (long long i = 0; i < n; i++)
        cin >> v[i];
    for (long long i = 0; i < n; i++) {
        s = v[i];
        for(long long j = i + 1; j < n; j++) {
            if(v[j] == 0) {
                j = n+1;
                i++;
            }
            else {
                s += v[j];
                if (s == 0) {
                    cnt++;
                    for(long long k = j; k < n; k++)
                        v[k+1] = v[k];
                    v[j] = s;
                    n++;
                }
            }
        }
    }
    cout << cnt << endl;
}

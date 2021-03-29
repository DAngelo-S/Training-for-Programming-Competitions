#include<bits/stdc++.h>

using namespace std;

bool ehLucky(long long n){
    while (n > 0) {
        if (!(n % 10 == 4 || n % 10 == 7))
            return false;
        n/=10;
    }
    return true;
}

/*15:09
 * ci:15:12
 * f:16:03
 */

int main() {
    int n, resp = 0;
    scanf("%d", &n);
    
    for(int i=1; i<=n; i++) {
        if (n % i == 0 && ehLucky(i))
            resp = 1;
    }
    
    if(resp)
        printf("YES\n");
    else
        printf("NO\n");
}

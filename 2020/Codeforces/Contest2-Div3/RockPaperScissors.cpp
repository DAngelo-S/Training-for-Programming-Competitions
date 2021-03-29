#include<bits/stdc++.h>

using namespace std;

int main () {
    int a1, b1, c1, a2, b2, c2, n, min=0, max=0;
    cin >> n;
    cin >> a1 >> b1 >> c1 >> a2 >> b2 >> c2;
    if (a1 > n - c2)
        min = a1 - n + c2;
    if (n - a2 < b1)
        min += b1 - n + a2;
    if (n - b2 < c1)
        min += c1 - n + b2;
    cout << min << " ";
    if (a1 < c2)
        max = a1;
    else 
        max = c2;
    if (b1 < a2)
        max += b1;
    else
        max += a2;
    if (c1 < b2)
        max += c1;
    else
        max += b2;
    cout << max << endl;
}

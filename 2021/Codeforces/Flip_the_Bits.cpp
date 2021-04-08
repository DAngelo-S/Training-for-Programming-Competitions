    #include<bits/stdc++.h>
     
    using namespace std;
     
    #define FOR(i, N) for(int(i) = 0; (i) < (N); (i)++)
    #define RESET(a, b) memset(a, b, sizeof(a))
    #define SORT(v) sort(v.begin(), v.end())
     
    void run() {
    	string a, b;
    	bool ve_igual = true;
    	int q0 = 0, q1 = 0;
     
    	cin >> a >> b;
     
    	for(int i = 0; i < a.size() && a != b; i++) {
    		if (ve_igual && a[i] == b[i]) {
    			if(a[i] == '0')
    				q0++;
    			else
    				q1++;
    		} else if(!ve_igual && a[i] != b[i]) {
    			if(a[i] == '0')
    				q0++;
    			else
    				q1++;
    			a[i] = b[i];
    		} else {
    			//cout << q0 << " " << q1 << endl;
    			if(q0 == q1) {
    				ve_igual = !ve_igual;
    				q0 = q1 = 0;
    				i--;
    			} else {
    				i = a.size();
    			}
    		}
    	}
     
    	if(a == b && q0 == q1)
    		cout << "YES" << endl;
    	else
    		cout << "NO" << endl;
     
    	return;
    }
     
    int main () {
     
    	ios_base::sync_with_stdio(false);
    	cin.tie(NULL);
     
    	int t, n;
     
    	cin >> t;
    	for(int i = 0; i < t; i++) {
    		cin >> n;
    		run();
    	}
    }

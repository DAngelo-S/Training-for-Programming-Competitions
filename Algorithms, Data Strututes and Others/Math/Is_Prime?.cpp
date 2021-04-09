#include<bits/stdc++.h>
#include<math.h>

using namespace std;

bool prime (long long N) {
        if(N <= 1)
		return 0;
	for(long long i = 2; i*i <= N; i++)
		if(N % i == 0)
			return 0;
	return 1;
}

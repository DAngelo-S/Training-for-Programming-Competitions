#include <iostream>

using namespace std;

int main(){
    unsigned long long A,B,C,D;

    scanf("%lld %lld %lld %lld", &A, &B, &C, &D);

    if(A == B || C < A || C == D) {
	    printf("-1\n");
	    return 0;
    }

    for(unsigned long long i=A; i <= C; i+=A) {
            if(C%i == 0 && i%B != 0 && D%i !=0) {
                    printf("%lld\n", i);
                    return 0;
            }}

    printf("-1\n");

    return 0;
}


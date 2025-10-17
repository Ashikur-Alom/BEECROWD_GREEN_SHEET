#include <stdio.h>

int main() {
    long long a,b;
    scanf("%lld %lld", &a, &b);
    long long sum = 0;
    
    for(long long i=a; i<=b; i++) {
        sum+=i;
    }
    
    printf("%lld\n", sum);
    
    return 0;
}

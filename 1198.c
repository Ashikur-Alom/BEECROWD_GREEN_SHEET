#include <stdio.h>

int main() {
long long a,b;
while(scanf("%lld %lld", &a, &b)!=EOF) {
    long long dif;
    dif=a-b;

    if(dif<0) {
        dif=-1*dif;
        printf("%lld\n", dif);
    }else {
        printf("%lld\n", dif);
    }
}



    return 0;
}

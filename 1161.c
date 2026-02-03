#include <stdio.h>

int main() {
long long m,n;

while(scanf("%lld %lld", &m, &n)!=EOF) {
    long long factm=1, factn=1,total;

    for(int i=1; i<=m; i++) {
        factm*=i;
    }
    for(int i=1; i<=n; i++) {
        factn*=i;
    }
    total=factm+factn;
    printf("%lld\n", total);
}



    return 0;
}

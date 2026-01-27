#include <stdio.h>

int main() {
int n;
scanf("%d", &n);

for(int i=1; i<=n; i++) {
    int x,prime=1;
    scanf("%d", &x);

    for(int j=2; j<x; j++) {
        if(x%j==0) {
            prime=0;
            break;
        }
    }
    if(prime==1) {
        printf("%d eh primo\n", x);
    }else {
        printf("%d nao eh primo\n", x);
    }
}


    return 0;
}

#include <stdio.h>

int main() {
int n;

while(scanf("%d", &n)!=EOF) {
    if(n%2==0) {
        break;
    }else {
        for(int i=1; i<=n; i+=2) {
            int ls=(n-i)/2;
            for(int j=1; j<=ls; j++) {
                printf(" ");
            }
            for(int j=1; j<=i; j++) {
                printf("*");
            }
            printf("\n");
        }

        int ts1=(n-1)/2;
        int ts2=(n-3)/2;

        for(int i=1; i<=ts1; i++) {
            printf(" ");
        }
        printf("*\n");

        for(int i=1; i<=ts2; i++) {
            printf(" ");
        }
        printf("***\n");
    }
    printf("\n");
}



    return 0;
}

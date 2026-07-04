#include <stdio.h>

int main() {
int n, caseNum=1;

while(scanf("%d", &n)!=EOF) {
    int count=1+n*(n+1)/2;

    if(count==1) printf("Caso %d: %d numero\n", caseNum++, count);
    else printf("Caso %d: %d numeros\n", caseNum++, count);
    
    printf("0");
    for(int i=1; i<=n; i++) {
        for(int j=0; j<i; j++) {
            printf(" %d", i);
        }
    }
    printf("\n\n");
}

    return 0;
}

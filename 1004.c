#include <stdio.h>

int main() {
    int a,b,prod;
    scanf("%d %d", &a, &b);
    
    prod = a * b;
    
    if(prod >= 0 || prod <= 0) {
        printf("PROD = %d\n", prod);
    }
    
    return 0;
}

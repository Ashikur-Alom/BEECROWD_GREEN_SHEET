#include <stdio.h>

int main() {
    int a,b,sum;
    scanf("%d %d", &a, &b);
    
    sum = a + b;
    
    if(sum <= 0 || sum >= 0 || sum == 0) {
        printf("X = %d\n", sum);
    }
    
    return 0;
}

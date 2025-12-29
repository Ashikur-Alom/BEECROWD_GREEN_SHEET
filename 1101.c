#include <stdio.h>

int main() {
    
int m,n;
int min,max;
int sum;

while (1) {
    scanf("%d %d", &m, &n);
    
    if(m<=0 || n<=0) {
        break;
    }
    
    if(m<n) {
        min=m;
        max=n;
    }else {
        min=n;
        max=m;
    }
    
    sum=0;
    
    for(int i=min; i<=max; i++) {
        printf("%d ", i);
        sum+=i;
    }
    printf("Sum=%d\n", sum);
}

    return 0;
}

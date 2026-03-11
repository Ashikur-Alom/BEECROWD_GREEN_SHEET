#include <stdio.h>

int main() {
int n,arr[1000];
scanf("%d", &n);

for(int i=0; i<1000; i++) {
    arr[i]=i%n;
    printf("N[%d] = %d\n", i, arr[i]);
}
    
    
    return 0;
}

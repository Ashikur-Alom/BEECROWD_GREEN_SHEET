#include <stdio.h>

int main() {
int v,arr[10];
scanf("%d", &v);

for(int i=0; i<10; i++) {
    arr[i]=v;
    printf("N[%d] = %d\n", i, arr[i]);
    v*=2;
}
 
 
    return 0;
}

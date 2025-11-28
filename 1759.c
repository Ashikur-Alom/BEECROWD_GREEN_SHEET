#include <stdio.h>

int main() {
    int a,count;
    scanf("%d", &a);
    
    for(int i=1; i < a; i++) {
        printf("Ho ", i);
        count++;
    }
    printf("Ho!\n");
    
    return 0;
}

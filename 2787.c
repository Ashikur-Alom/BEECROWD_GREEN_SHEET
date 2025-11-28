#include <stdio.h>

int main() {
    int L,C;
    scanf("%d %d", &L, &C);
    
    if((L+C) % 2 == 0){
        //will be white
        printf("1\n");
    }else{
        //will be black
        printf("0\n");
    }
    
    return 0;
}

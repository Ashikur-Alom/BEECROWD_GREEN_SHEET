#include <stdio.h>

int main() {
    int cd1,cd2,cd3,cd4,cd5;
    scanf("%d %d %d %d %d", &cd1, &cd2, &cd3,&cd4, &cd5);
    
    if(cd1 > 0 && cd5 < 14){
        if(cd1 < cd2 && cd2 < cd3 && cd3 < cd4 && cd4 < cd5) {
            printf("C\n");
        }else if(cd1 > cd2 && cd2 > cd3 && cd3 > cd4 && cd4 > cd5) {
            printf("D\n");
        }else{
            printf("N\n");
        }
    }
    
    return 0;
}

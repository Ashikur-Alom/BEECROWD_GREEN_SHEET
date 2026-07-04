#include <stdio.h>
#include <math.h>

int main() {
int L,C,R1,R2;

while (scanf("%d %d %d %d", &L, &C, &R1, &R2)==4 && (L || C || R1 || R2)) {
    if(2*R1<=L && 2*R1<=C && 2*R2<=L && 2*R2<=C) {
        double dist=sqrt(pow(L-R1-R2, 2)+pow(C-R1-R2,2));
        if(dist>=R1+R2) {
            printf("S\n");
        }else{
            printf("N\n");
        }
    }else {
        printf("N\n");
    }
}
    return 0;
}

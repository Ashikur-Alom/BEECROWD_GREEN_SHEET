#include <stdio.h>
#include <math.h>

int main() {
int R,W,L;
int count=1;

while (scanf("%d", &R)==1 && R!=0) {
    scanf("%d %d", &W, &L);
    double diagonal=sqrt((double)W*W+(double)L*L);
    
    if(diagonal<=2.0*R) {
        printf("Pizza %d fits on the table.\n", count);
    } else {
        printf("Pizza %d does not fit on the table.\n", count);
    }
    count++;
}
    return 0;
}

#include <stdio.h>

int main() {
int n;
scanf("%d", &n);

if(n<3 & n>1000) {
    return 0;
}else {
    for(int i=1; i<11; i++) {
        printf("%d x %d = %d\n", i, n, i*n);
    }
}


    return 0;
}

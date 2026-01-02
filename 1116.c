#include <stdio.h>

int main() {
int n;
int x,y;

if(scanf("%d", &n) != 1) {
    return 1;
}

for(int i=0; i<n; i++) {
    scanf("%d %d", &x, &y);
    
    if(y==0) {
        printf("divisao impossivel\n");
    }else {
        printf("%.1f\n", (float)x/y);
    }
}

    return 0;
}

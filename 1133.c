#include <stdio.h>

int main() {
    
int m,n;
int min,max;
scanf("%d %d", &m, &n);

if(m<n) {
    min=m;
    max=n;
}else {
    min=n;
    max=m;
}

for(int i=min+1; i<max; i++) {
    if(i%5==2 || i%5==3) {
        printf("%d\n", i);
    }
}


    return 0;
}

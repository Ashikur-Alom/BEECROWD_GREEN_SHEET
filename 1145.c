#include <stdio.h>

int main() {
int x,y,temp;

if(scanf("%d %d", &x, &y)!=2) {
    return 1;
}
if(x>y) {
    temp=x;
    x=y;
    y=temp;
}

for(int i=1; i<=y; i++) {
    printf("%d",i);
    if(i%x==0) printf("\n");
    else printf(" ");
}
    
    return 0;
}

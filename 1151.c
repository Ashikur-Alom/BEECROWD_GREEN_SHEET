#include <stdio.h>

int main() {
int n,num1=0,num2=1,nxtnum;
scanf("%d", &n);

for(int i=1; i<=n; i++) {
    if(i==1) printf("%d",num1);
    else printf(" %d", num1);

    nxtnum=num1+num2;
    num1=num2;
    num2=nxtnum;
}
printf("\n");


    return 0;
}

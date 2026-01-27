#include <stdio.h>

int main() {
int n,c2=0,c3=0,c4=0,c5=0;
scanf("%d", &n);

for(int i=1; i<=n; i++) {
    int l;
    scanf("%d", &l);

    if(l%2==0) c2++;
    if(l%3==0) c3++;
    if(l%4==0) c4++;
    if(l%5==0) c5++;
}
printf("%d Multiplo(s) de 2\n%d Multiplo(s) de 3\n%d Multiplo(s) de 4\n%d Multiplo(s) de 5\n",c2,c3,c4,c5);

    return 0;
}

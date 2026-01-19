#include <stdio.h>

int main() {
int n,even=0,odd=0,posi=0,nega=0;
for(int i=1; i<=5; i++) {
    scanf("%d", &n);

    if(n>0) {
        posi++;
    }else if(n<0) {
        nega++;
    }

    if(n%2==0) {
        even++;
    }else {
        odd++;
    }
}

printf("%d valor(es) par(es)\n", even);
printf("%d valor(es) impar(es)\n", odd);
printf("%d valor(es) positivo(s)\n", posi);
printf("%d valor(es) negativo(s)\n", nega);


    return 0;
}

#include <stdio.h>

int main() {
int n,amt,total=0,ctotal=0,rtotal=0,stotoal=0;
char ch;
scanf("%d", &n);

for(int i=1; i<n+1; i++) {
    scanf("%d %c", &amt, &ch);
    total+=amt;

    if(amt>=0 && ch=='C') {
        ctotal+=amt;
    }else if(amt>=0 && ch=='R') {
        rtotal+=amt;
    }else if(amt>=0 && ch=='S') {
        stotoal+=amt;
    }else {
        return 0;
    }
}

printf("Total: %d cobaias\n", total);
printf("Total de coelhos: %d\n", ctotal);
printf("Total de ratos: %d\n", rtotal);
printf("Total de sapos: %d\n", stotoal);
printf("Percentual de coelhos: %.2f %%\n",(float) (ctotal*100)/total);
printf("Percentual de ratos: %.2f %%\n",(float) (rtotal*100)/total);
printf("Percentual de sapos: %.2f %%\n",(float) (stotoal*100)/total);



    return 0;
}

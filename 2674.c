#include <stdio.h>
#include <math.h>

int main() {
int n;

while(scanf("%d", &n)!=EOF) {
    int prime=1;

    if(n<2) prime=0;
    else if(n==2) prime=1;
    else if(n%2==0) prime=0;
    else {
        for(int i=3; i<=sqrt(n); i+=2) {
            if(n%i==0) {
                prime=0;
                break;
            }
        }
    }

    if(prime==0) printf("Nada\n");
    else {
        int sPrime=1;

        while(n>0) {
            if((n%10)!=2 && (n%10)!=3 && (n%10)!=5 && (n%10)!=7) {
                sPrime=0;
                break;
            }
            n/=10;
        }

        if(sPrime==1) printf("Super\n");
        else printf("Primo\n");
    }
}


    return 0;
}

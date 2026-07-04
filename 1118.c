#include <stdio.h>

int main() {
int calc=1;

while(calc==1) {
    float s1=-1, s2=-1, s;

    while(s1<0) {
        scanf("%f", &s);

        if(s>=0 && s<=10) s1=s;
        else printf("nota invalida\n");
    }

    while(s2<0) {
        scanf("%f", &s);

        if(s>=0 && s<=10) s2=s;
        else printf("nota invalida\n");
    }

    printf("media = %.2f\n", (s1+s2)/2.0);

    calc=0;
    while(calc!=1 && calc!=2) {
        printf("novo calculo (1-sim 2-nao)\n");
        scanf("%d", &calc);
    }
}

    return 0;
}

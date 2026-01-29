#include <stdio.h>
#include <stdlib.h>

int main() {
int n;
scanf("%d", &n);

while(n>0) {    //or use while(n--)
    int qt,s;
    scanf("%d %d", &qt, &s);

    int wp=0,mindif=101;

    for(int i=1; i<=qt; i++) {
        int g;
        scanf("%d", &g);
        int dif=abs(g-s);

        if(dif<mindif) {
            mindif=dif;
            wp=i;
        }
    }
    printf("%d\n", wp);
    n--;
}


    return 0;
}

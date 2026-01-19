#include <stdio.h>

int main() {
float score,sum=0,validcount=0;

while(validcount<2) {
    scanf("%f", &score);
    if(score>=0 && score<=10) {
        sum+=score;
        validcount++;
    }else {
        printf("nota invalida\n");
    }
}

printf("media = %.2f\n", sum/2);

    return 0;
}

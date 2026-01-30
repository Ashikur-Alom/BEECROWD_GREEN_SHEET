#include <stdio.h>
#include <math.h>

int main() {
int c;
scanf("%d", &c);

while(c--) {
    int n;
    scanf("%d", &n);

    int s=(1-pow(-1, n))/2;\
    printf("%d\n", s);
}



    return 0;
}

#include <stdio.h>

int main() {
int r,l;
scanf("%d %d", &r, &l);

double v=(4.0/3.0)*3.1415*r*r*r;
int ballons=(int)(l/v);
printf("%d\n", ballons);

    return 0;
}

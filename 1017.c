#include <stdio.h>

int main() {
int t,V;
double s,fuel;
scanf("%d %d", &t, &V);

s=V*t;
fuel=s/12;
printf("%.3lf\n", fuel);

    return 0;
}

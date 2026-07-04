#include <stdio.h>
#include <math.h>

int main() {
int n;
double h,c,l;

while(scanf("%d", &n)!=EOF) {
    scanf("%lf %lf %lf", &h, &c, &l);

    double rl=sqrt(h*h+c*c);
    double totalArea=(n*rl*l)/10000.0;
    printf("%.4lf\n", totalArea);
}

    return 0;
}

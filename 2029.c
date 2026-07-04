#include <stdio.h>

int main() {
double V, D;

while(scanf("%lf %lf", &V, &D)==2) {
    double R=D/2.0;
    double area=3.14*R*R;
    double height = V/area;
        
    printf("ALTURA = %.2lf\n", height);
    printf("AREA = %.2lf\n", area);
}
    return 0;
}

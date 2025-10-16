#include <stdio.h>

int main() {
    int p1code,p1unit,p2code,p2unit;
    float p1price,p2price,value;
    
    scanf("%d %d %f", &p1code, &p1unit, &p1price);
    scanf("%d %d %f", &p2code, &p2unit, &p2price);
    
    value = (p1unit * p1price) + (p2unit * p2price);
    
    printf("VALOR A PAGAR: R$ %.2f\n",  value);
    
    return 0;
}

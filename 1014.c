#include <stdio.h>

int main() {
    int totaldistance;
    float totalspentfuel,averageconsumption;
    
    scanf("%d %f", &totaldistance, &totalspentfuel);
    averageconsumption = totaldistance / totalspentfuel;
    
    printf("%.3f km/l\n", averageconsumption);
    
    return 0;
}

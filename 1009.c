#include <stdio.h>

int main() {
char name[100];
double salary, sales, bonus, totalsalary;
scanf("%s", &name);
scanf("%lf %lf", &salary, &sales);

bonus = sales * .15;
totalsalary = salary + bonus;
printf("TOTAL = R$ %.2lf\n", totalsalary);    
    
    return 0;
}

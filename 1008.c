#include <stdio.h>

int main() {
    int imp_num,work_hours;
    float amount_per_hour,salary;
    
    scanf("%d %d %f", &imp_num, &work_hours, &amount_per_hour);
    salary = amount_per_hour * work_hours;
    
    printf("NUMBER = %d\n", imp_num);
    printf("SALARY = U$ %.2f\n", salary);
    
    return 0;
}

#include <stdio.h>
#include <math.h>

int main() {
    float salary,newsalary,moneyearned,readjrate;
    scanf("%f", &salary);
    
    if(salary >= 0.00 && salary <= 400.00) {
        readjrate = .15;
        moneyearned = salary * readjrate;
        newsalary = salary + moneyearned;
        printf("Novo salario: %.2f\n", newsalary);
        printf("Reajuste ganho: %.2f\n", moneyearned);
        printf("Em percentual: 15 %\n");
    }else if(salary > 400.00 && salary <= 800.00) {
        readjrate = .12;
        moneyearned = salary * readjrate;
        newsalary = salary + moneyearned;
        printf("Novo salario: %.2f\n", newsalary);
        printf("Reajuste ganho: %.2f\n", moneyearned);
        printf("Em percentual: 12 %\n");
    }else if(salary > 800.00 && salary <= 1200.00) {
        readjrate = .10;
        moneyearned = salary * readjrate;
        newsalary = salary + moneyearned;
        printf("Novo salario: %.2f\n", newsalary);
        printf("Reajuste ganho: %.2f\n", moneyearned);
        printf("Em percentual: 10 %\n");
    }else if(salary >1200.00 && salary <= 2000.00) {
        readjrate = .07;
        moneyearned = salary * readjrate;
        newsalary = salary + moneyearned;
        printf("Novo salario: %.2f\n", newsalary);
        printf("Reajuste ganho: %.2f\n", moneyearned);
        printf("Em percentual: 7 %\n");
    }else if(salary > 2000.00) {
        readjrate = .04;
        moneyearned = salary * readjrate;
        newsalary = salary + moneyearned;
        printf("Novo salario: %.2f\n", newsalary);
        printf("Reajuste ganho: %.2f\n", moneyearned);
        printf("Em percentual: 4 %\n");
    }
    
    return 0;
}

#include <stdio.h>

int main(){
    
int amount,total;
scanf("%d",&amount);

printf("%d\n",amount);
total = amount/100;
printf("%d nota(s) de R$ 100,00\n",total);
amount-= (total*100);

total = amount/50;
printf("%d nota(s) de R$ 50,00\n",total);
amount -= (total*50);

total = amount/20;
printf("%d nota(s) de R$ 20,00\n",total);
amount -= (total*20);

total = amount/10;
printf("%d nota(s) de R$ 10,00\n",total);
amount -= (total*10);

total = amount/5;
printf("%d nota(s) de R$ 5,00\n",total);
amount -= (total*5);

total = amount/2;
printf("%d nota(s) de R$ 2,00\n",total);
amount -= (total*2);

total = amount/1;
printf("%d nota(s) de R$ 1,00\n",total);
    
    
    
    
    return 0;
}

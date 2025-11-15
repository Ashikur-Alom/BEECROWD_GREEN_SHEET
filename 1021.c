#include <stdio.h>

int main() {
    float amt;
    int total;
    scanf("%f", &amt);
    
    //notes converts into coins 
    amt *= 100;
    printf("NOTAS:\n");

    //100 tk notes 
    total = amt / 10000;
    printf("%d nota(s) de R$ 100.00\n",total);
    amt -= (total * 10000);
    //50 tk notes 
    total = amt / 5000;
    printf("%d nota(s) de R$ 50.00\n",total);
    amt -= (total * 5000);
    //20 tk notes
    total = amt / 2000;
    printf("%d nota(s) de R$ 20.00\n",total);
    amt -= (total * 2000);
    //10 tk notes 
    total = amt / 1000;
    printf("%d nota(s) de R$ 10.00\n",total);
    amt -= (total * 1000);
    //5 tk notes 
    total = amt / 500;
    printf("%d nota(s) de R$ 5.00\n",total);
    amt -= (total * 500);
    //2 tk notes
    total = amt / 200;
    printf("%d nota(s) de R$ 2.00\n",total);
    amt -= (total * 200);
    
    printf("MOEDAS:\n");
    //1 tk coins 
    total = amt / 100;
    printf("%d moeda(s) de R$ 1.00\n",total);
    amt -= (total * 100);
    //0.50 coins 
    total = amt / 50;
    printf("%d moeda(s) de R$ 0.50\n",total);
    amt -= (total * 50);
    //0.25 coins 
    total = amt / 25;
    printf("%d moeda(s) de R$ 0.25\n",total);
    amt -= (total * 25);
    //0.10 coins 
    total = amt / 10;
    printf("%d moeda(s) de R$ 0.10\n",total);
    amt -= (total * 10);
    //0.05 coins
    total = amt / 5;
    printf("%d moeda(s) de R$ 0.05\n",total);
    amt -= (total * 5);
    //0.01 coins
    total = amt / 1;
    printf("%d moeda(s) de R$ 0.01\n",total);
    

    return 0;
}

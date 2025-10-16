#include <stdio.h>


int main() {
    int totaldays,days,months,years;
    scanf("%d", &totaldays);
    
    years = totaldays / 365;
    months = (totaldays % 365) / 30;
    days = (totaldays % 365) % 30;
    
    printf("%d ano(s)\n",years);
    printf("%d mes(es)\n",months);
    printf("%d dia(s)\n",days);
    
    return 0;
}

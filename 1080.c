#include <stdio.h>

int main() {
int n,position=0;
int highestValue=0;
for(int i=1; i<=100; i++) {
    scanf("%d", &n);
    if(n>highestValue) {
        highestValue=n;
        position=i;
    }
}
    
printf("%d\n", highestValue);
printf("%d\n",position);
    return 0;
}

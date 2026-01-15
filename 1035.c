#include <stdio.h>

int main() {
int a,b,c,d,sumab,sumcd;
scanf("%d %d %d %d", &a, &b, &c, &d);

sumab=a+b;
sumcd=c+d;

if(a%2==0 && c>0 && d>0 && b>c && d>a && sumcd>sumab) {
    printf("Valores aceitos\n");
}else {
    printf("Valores nao aceitos\n");
}
// if(a%2==0) {
//     if(c>0 && d>0) {
//         if(b>c && d>a && sumcd>sumab) {
//             printf("Valores aceitos\n");
//         }else {
//             printf("Valores nao aceitos\n");
//         }
//     }else {
//         printf("Valores nao aceitos\n");
//     }
// }else {
//     printf("Valores nao aceitos\n");
// }
    
    
    
    return 0;
}

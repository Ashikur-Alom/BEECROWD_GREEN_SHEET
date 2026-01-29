#include <stdio.h>

int main() {
int n;
scanf("%d", &n);

while(n--) {
    float x;
    int days=0;
    scanf("%f", &x);

    while(x>1.0) {
        x/=2;
        days++;
    }
    printf("%d dias\n", days);
}


    return 0;
}

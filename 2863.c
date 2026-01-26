#include <stdio.h>

int main() {
int n;

while(scanf("%d", &n)!=EOF) {
    float t,mt=11.0;

    for(int i=1; i<=n; i++) {
        scanf("%f", &t);
        if(t<mt) {
            mt=t;
        }
    }

    printf("%.2f\n", mt);
}




    return 0;
}

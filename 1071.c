#include <stdio.h>

int main() {
    
int m,n;
int min,max;
int sum=0;
scanf("%d %d", &m, &n);

if(m<n) {
    min=m;
    max=n;
}else {
    max=m;
    min=n;
}

for(int i=min+1; i<max; i++) {
    if(i%2!=0) {
        sum+=i;
    }
}    


printf("%d\n", sum);

    return 0;
}

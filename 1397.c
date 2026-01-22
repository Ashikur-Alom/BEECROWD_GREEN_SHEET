#include <stdio.h>

int main() {
int N;

while(1) {
    scanf("%d", &N);
    int A,B,Acount=0,Bcount=0;

    if(N==0) {
        break;
    }else {
        for(int i=1; i<=N; i++) {
            scanf("%d %d", &A, &B);

            if(A>B) {
                Acount++;
            }else if(A<B) {
                Bcount++;
            }
        }
        printf("%d %d\n", Acount, Bcount);
    }
}



    return 0;
}

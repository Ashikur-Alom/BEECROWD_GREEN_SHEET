#include <stdio.h>

int main() {
int n;

while(scanf("%d", &n) && n!=0) {
    for(int i=1; i<=n; i++) {
        int gl,mc=0,mp=0;
        
        for(int j=0; j<5; j++) {
            scanf("%d", &gl);
            
            if(gl<=127) {
                mc++;
                mp=j;
            }
        }
        
        if(mc==1) {
            printf("%c\n", 'A'+mp);
        }else {
            printf("*\n");
        }
    }
}
    
    
    
    return 0;
}

#include <stdio.h>

int main() {
int y,arr[20];

for(int i=0; i<20; i++) {
    scanf("%d", &arr[i]);
}

for(int i=0; i<10; i++) {
    int temp=arr[i];
    arr[i]=arr[19-i];
    arr[19-i]=temp;
}    

for(int i=0; i<20; i++) {
    printf("N[%d] = %d\n", i, arr[i]);
}    
    
    return 0;
}

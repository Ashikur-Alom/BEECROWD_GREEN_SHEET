#include <iostream>
using namespace std;

int main() {
int bills[]= {2,5,10,20,50,100};
    
while(1) {
    int n,m;
    cin >> n >> m;
    
    if(n==0 || m==0) break;
    int change=m-n;
    int isPossible=0;
    
    for(int i=0; i<6; i++) {
        for(int j=0; j<6; j++) {
            if(bills[i]+bills[j]==change) {
                isPossible=1;
                break;
            }
        }
        if(isPossible==1) break;
    }
    
    if(isPossible==1) cout << "possible\n";
    else cout << "impossible\n";
}
    
    return 0;
}

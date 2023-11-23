#include <stdio.h>
#include <limits.h>

int main(){
    int n;

    int mx=INT_MIN;

    int mn=INT_MAX; 
    
    scanf("%d",&n);
    int a;

    for(int i=1; i<=n; i++){
        scanf("%d",&a);
        
        if(mx < a) {
            mx = a;
        }
        
        if(mn>a){
            mn = a;
        }
        
    }
    
    printf("%d %d\n",mx, mn);

    return 0;
}
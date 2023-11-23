#include <stdio.h>
#include <limits.h>

int main(){
    int n;
    scanf("%d",&n);
    int a[n]; 
   
    for(int i=0; i<n; i++){ 
        scanf("%d",&a[i]);
    }

   int sum=0;
    for(int i=0; i<n; i++){
        sum = sum + a[i];
    }
   printf("%f",(float)sum/(float)n);
    
    

    return 0;
}
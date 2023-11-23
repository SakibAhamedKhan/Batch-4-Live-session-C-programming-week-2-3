#include <stdio.h>
#include <limits.h>

int main(){
    int n;  
    scanf("%d",&n);
    int a[n]; 
   
    for(int i=0; i<n; i++){ 
        scanf("%d",&a[i]);
    }
    // int delete_position = 1;
    // for(int i=delete_position; i<n-1; i++){
    //     a[i] = a[i+1];
    // }

    // for(int i=0; i<n-1; i++){
    //     printf("%d ",a[i]);
    // }

    printf("%d", sizeof(a)/sizeof(int));

    return 0;
}
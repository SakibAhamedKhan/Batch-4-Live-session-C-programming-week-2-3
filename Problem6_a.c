#include <stdio.h>
#include <limits.h>

int main(){
    int n;
    scanf("%d",&n);
    int a[n]; // 0 - 3
    // scanf("%d %d %d %d %d %d",&a[0], &a[1], &a[2], &a[3],&a[4],&a[5]);
    for(int i=0; i<n; i++){ // i=0, 1, 2
        scanf("%d",&a[i]);
    }

    // printf("%d %d %d %d %d %d",a[0]+5, a[1]+5, a[2]+5, a[3]+5, a[4]+5, a[5]+5);
    for(int i=0; i<n; i++){
        printf("%d ",a[i]);
    }
    // printf("%d ",a[0]);
    // printf("%d ",a[3]);
    
    

    return 0;
}
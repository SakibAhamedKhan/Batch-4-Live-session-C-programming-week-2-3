#include <stdio.h>
#include <limits.h>

int main(){
    int n;
    scanf("%d",&n);
    int a[n+1];  // 4 = n+1= 5 [ 0, 1, 2 ,3 , 4]
   
    for(int i=0; i<n; i++){ 
        scanf("%d",&a[i]);
    }

    int insert_position, insert_value;
    scanf("%d %d",&insert_position, &insert_value);
    for(int i=n; i>insert_position; i--){
        a[i] = a[i-1];
    }

    a[insert_position] =insert_value;

    for(int i=0; i<n+1; i++){
        printf("%d ",a[i]);
    }

    return 0;
}
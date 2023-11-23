#include <stdio.h>
#include <limits.h>

int main(){
    // 0 2 4 6 8 ... 
    // for(int i=0; i<=100 ; i=i+5){
    //     // if(i%2==0){
    //     //     printf("%d ",i);
    //     // }
    //         printf("%d ",i);
        
    // }
    //  for(int i=100; i>=0 ; i=i-5){
    //         printf("%d ",i);
        
    // }
    int b = 5;
    for(int i=1; i<=20; i++){
        printf("%d x %d  = %d\n",b, i, b*i);
    }
    return 0;
}
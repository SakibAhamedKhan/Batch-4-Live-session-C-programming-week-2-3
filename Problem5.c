#include <stdio.h>
#include <limits.h>

int main(){


    for(int i=1; i<=5; i++){
        for(int j=1; j<=i; j++){
            if(i%2!=0){
                printf("#");
            } else {
                printf("-");
            }
        }
        printf("\n");

    }

    // for(int i=1; i<=5; i++){
    //     for(int j=5; j>=i; j--){
    //         printf("*");
    //     }
    //     printf("\n");

    // }
    return 0;
}
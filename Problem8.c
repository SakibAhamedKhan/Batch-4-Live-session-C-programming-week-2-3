#include <stdio.h>
#include <limits.h>

int main(){
    int n;
    scanf("%d",&n);
    int a[n]; 
    for(int i=0; i<n; i++){
        scanf("%d",&a[i]);
        
    }

    int counting_array[40]={0};
    

    for(int i=0; i<n; i++){ 
        int temp = a[i]; 
        counting_array[temp] = counting_array[temp] + 1;

    }
    

    for(int i=0; i<40; i++){
        if(counting_array[i]>0){
            printf("%d asche = %d bar\n",i, counting_array[i]);
        }
    }
    return 0;
}
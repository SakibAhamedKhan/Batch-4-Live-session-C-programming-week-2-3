#include <stdio.h>
#include <limits.h>
#include <string.h>

int main(){
    char a[6];
    // scanf("%s",&a);
    for(int i=0; i<6; i++){
        scanf("%c",&a[i]);
    }

    for(int i=0; i<6; i++){
        printf("%c\n",a[i]);
    }

    printf("%d\n", sizeof(a));

    char b[6];
    strcpy(b,a);
    printf("%s", b);

    return 0;
}
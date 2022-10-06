c#include <stdio.h>

cint main(){

    int i=1;
    int j=1;
    int d;

    for(i=1; i<=10; ++i){
        for(j=1; j<=10; ++j){
            d = i * j;
            printf("%d * %d = %d. \n", i, j, d);
        }
        printf("\n");
    }
    return 0;
}
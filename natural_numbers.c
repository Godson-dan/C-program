#include <stdio.h>

void naturalNumbers( int x, int y);
int x, y;

int main()
{
    printf("\n PROGRAM TO PRINT NATURAL NUMBERS IN ASCENDING OR DESCENDING OTHER ");
    printf("\n\nEnter first positive number: ");
    scanf("%d", &x);
    printf("Enter second positive number: ");
    scanf("%d", &y);
    
    naturalNumbers(x, y);
    return 0;
}
 void naturalNumbers( int x, int y)
{
    if(x <= 0 || y <= 0){
        printf("0 is not a natural");
    }
    else if(x <= y && x < y){
        printf("%d ", x);
        naturalNumbers(x+1, y);
    }
    else if(y < x && y != x){
        printf("%d ", x);
        naturalNumbers(x - 1, y);
    }
    else{
        printf("%d", x); 
    }
}
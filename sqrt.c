#include <stdio.h>
#include <math.h>

/**
 * program to take input from user
 * square the input
 * prints input raise to the square root
 * return 0
 */

int main(){

    double j, i, k;
//take input from user
    printf("Enter the number: ");
    scanf("%lf", &j);
//take square root
    i = sqrt(j);
    printf("Square root = %.2lf", i);
//assign power
    k = pow(j, i);
    printf("\nResult = %.2lf", k);

    return 0;
    
}
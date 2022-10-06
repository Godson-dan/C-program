#include <stdio.h>

int main(){
    double number;
    printf("Program to check if a number is negative or positive.\n");
// receive input from user
    printf("Enter number: ");
    scanf("%lf", &number);

    if( number == 0){
        printf("\nThe number is zero");
    }
    else if(number < 0){
        printf("\nThe number is negative");
    }
    else if(number > 0){
        printf("\nThe number is positive");
    }

    return 0;
}
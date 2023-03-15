#include <stdio.h>

/* this program takes two input from user
* performs a multiplitions on a function
*
*returns multiply to main*/

int multiply_numbers( int a, int b);

int main(){
    int number1, number2, result;
    printf("Enter number1: ");
    scanf("%d", &number1);
    printf("Enter number2: ");
    scanf("%d", &number2);

    result = multiply_numbers(number1, number2);

    printf("%d * %d = %d", number1, number2, result);

    return 0;
}

int multiply_numbers( int a, int b){
    return a*b;
}
#include <stdio.h>

/*Program to print multiplication of a number
*from 0-10
*
*return 0;*/

int main(){
    int number;
    int product;

    printf("Enter number: ");
    scanf("%d", &number);
   
    int i = 10;
    int j=1;
    while(i>=j){
    product = i * number;
    printf("\nProduct of %d * %d = %d", number, i, product);
    i = i - 1;
    }
    

    return 0;

}
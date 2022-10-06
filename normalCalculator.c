#include <stdio.h>

int main(){
    char operator;
    double number1, number2;

//Take input from the user
    printf("\nEnter operator(+,*,-,/): ");
    scanf("%c", &operator);
    printf("Enter first number: ");
    scanf("%lf", &number1);
    printf("\nEnter second number: ");
    scanf("%lf", &number2);

    switch(operator){
        case '+':
        printf("%.2lf + %.2lf= %.2lf", number1, number2, number1+number2);
        break;

        case '-':
        printf("%.2lf - %.2lf= %.2lf", number1, number2, number1-number2);
        break;

        case '*':
        printf("%.2lf * %.2lf= %.2lf", number1, number2, number1*number2);
        break;

        case '/':
        printf("%.2lf / %.2lf= %.2lf", number1, number2, number1/number2);
        break;

        default:
        printf("wrong input!!!");
        printf("Enter a valid operator.");
        break;
    }

return 0;
}
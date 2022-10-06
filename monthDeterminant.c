#include <stdio.h>

int main(){
    int number;
    
    printf("\nProgram to print month when a number is netered from 1-12");
    
    printf("\nEnter number: ");
    scanf("%d", &number);

    switch(number){

        case 1:
        printf("January");
        break;

        case 2:
        printf("February");
        break;

        case 3:
        printf("March");
        break;

        case 4:
        printf("April");
        break;

        case 5:
        printf("May");
        break;

        case 6:
        printf("June");
        break;

        case 7:
        printf("July");
        break;

        case 8:
        printf("August");
        break;

        case 9:
        printf("september");
        break;

        case 10:
        printf("October");
        break;

        case 11:
        printf("November");
        break;

        case 12:
        printf("December");
        break;

        default:
        printf("Wrong input.\n");
        printf("Try a number from 1-12.");
        break;
    }

    return 0;
}
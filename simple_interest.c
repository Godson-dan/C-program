#include <stdio.h>
#include <math.h>

// Program to solve simple interest and amount
int main(){

    int P, R, T, A, I;
    
    printf("Enter Principal: ");
    scanf("%d", &P);
    printf("\nEnter Rate: ");
    scanf("%d", &R);
    printf("\nEnter Time: ");
    scanf("%d", &T);

    //calculate simple interest
    printf("Simple Interest is (P * R * T / 100)\n");
    I = (P * R * T) / 100;
    printf("Simple interest(I) = %d\n\n", I);
    //calculate Amount
    printf("Amount is principal + Simple interest\n");
    A = P + I;
    printf("Amount = %d", A);

return 0;
}
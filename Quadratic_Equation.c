#include <stdio.h>
#include <math.h>

int main(){
    float a, b, c, X, X1, X2;
    printf(" \nProgram to calculate root of a Quadratic equation\n");

    printf("Enter a: ");
    scanf("%f", &a);
    printf("Enter b: ");
    scanf("%f", &b);
    printf("Enter c: ");
    scanf("%f", &c);

X = b * b -  4 * a * c ;
printf("X = %f\n", X);

if ( X > 0){
X1 = ( - b + (sqrt(X))) / ( 2 * a );
X2 = ( - b - (sqrt(X))) / ( 2 * a );
printf("X1 = %f\n", X1);
printf("X2 = %f\n", X2);
}
else if(X < 0){
X1 = ( - b + (sqrt( -1 * X))) / ( 2 * a );
X2 = ( - b - (sqrt( -1 * X))) / ( 2 * a );
printf("Imaginary X1 = %fi\n", X1);
printf("Imaginary X2 = %fi\n", X2);
}
else if(X = 0){
X1 = ( - b + (sqrt(X))) / ( 2 * a );
X2 = ( - b - (sqrt(X))) / ( 2 * a );
printf("X1 = X2 = %f\n", X1);
}
return 0;

}
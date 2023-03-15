#include <stdio.h>
//recursive function prototype
void multiplicationTable (int x, int y, int z, int a);
// global datatypes
int x, y, z, a;

int main(){
    //Take input for the user
    printf("\n\nMultiplication Table for a particular number");
    printf("\nNote numbers should be positive\n");
    printf("\nEnter positive: ");
    scanf("%d", &x);
    printf("\nEnter number to be multiplied to : ");
    scanf("%d", &y);
    //numeber of result
    printf("\nEnter the number of result")
    printf("Note:if you want two result, enter 1 for start and 2 for stop.")
    printf("\nEnter start: ");
    scanf("%d", &a);
    printf("\nEnter stop: ");
    scanf("%d", &z);
//recursive function(void). meaning it won't return any value
    multiplicationTable (x, y, z, a);
    return 0;
}
//recursive function
void multiplicationTable (int x, int y, int z, int a){
    int multiplication;
    if(a!=0 && a<=z){
        multiplication = x * y;
        printf("%d * %d = %d\n", x, y, multiplication);//print product
        multiplicationTable (x, y+1, z, a+1);//recurse
    }
}
//A loop program that ends if a positive number is entered
#include <stdio.h>

int main(){
    int j;
    printf("Note: Loop ends once a positive number is entered");

    while(1){
//receive input from user
    printf("Enter number: ");
    scanf("%d", &j);
    if( j < 0 && j % 2 != 0){
        printf("Negative Odd\n");
        continue;
    }
    if( j < 0 && j % 2 == 0){
        printf("Negative Even\n");
        continue;
    }
    if( j > 0 && j % 2 == 0){
        printf("Positive Even\n");
        break;
    }
    if( j > 0 && j % 2 != 0){
        printf("Positive Odd\n");
        break;
    }
    
}
return 0;
}
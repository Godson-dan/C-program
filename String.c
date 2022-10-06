#include <stdio.h>

// Program that accepts string from a user with white space.
int main(){

    char Statement[20000];
//receive input from the user
    printf("\n Tell us about youself, We love to know about you :) :\n");
    printf("          [Note: Over 100 words :) ]\n\n");

    fgets(Statement, 20000, stdin);
    printf("\n\n");//new lines

    printf("You typed: %s", Statement);//print

    return 0;
}
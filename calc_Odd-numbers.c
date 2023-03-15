//program to calculate all the odd numbers from 1 - 100
#include <stdio.h>

int main(){
    int i; 
    int sum = 0;
 
 //interate with a for loop
 for(i=1; i<=100; ++i){
    if(i % 2 == 0){
        continue;
    }
    sum += i;
 }
 //print sum
 printf("Sum of odd numbers from 1 to 100 = %d", sum);

 return 0;
}
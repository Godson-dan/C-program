#include <stdio.h>

int main(){

 int grade;
printf("\n\nEnter grade: ");
scanf ("%d", &grade);

if(grade>=0 && grade<=39){
    printf("Grade is: F");
}
else if(grade>39 && grade<=45){
    printf("Grade is: E");
}
else if(grade>45 && grade<=55){
    printf("Grade is: D");
}
else if(grade>55 && grade <=60){
    printf("Grade is: C");
}
else if(grade>60 && grade<=69){
    printf("Grade is: B");
}
else if(grade>69 && grade<=100){
    printf("Grade is: A");
}
else if(grade>100){
    printf("Grade for this score does not exist\n");
    printf("Enter score from 0 - 100 ");
}

return 0;
}
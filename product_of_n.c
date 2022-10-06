#include <stdio.h>

int main(){
     int n;
     printf("Enter an integer: ");
     scanf("%d", &n);
      int i;
      int product;
      for(i=1; i<=10; ++i){
        product= n * i;
        printf("Product of %d * %d = %d\n", n, i, product);
      }
      return 0;
}
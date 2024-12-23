// 7. Write a C program to find input number is prime or composite.

#include<stdio.h>
int main(){
       int num, i, prime = 1;

       printf("Enter a Number: ");
       scanf("%d", &num);

      if(num <= 1){
        printf("%d is neither prime nor composite. \n",num);
      }
      else {
         for(i = 2; i <= num/2; i++){
            if(num % i == 0){
              prime = 0;
              break;
            }
         }
         if(prime){
            printf("%d is prime numbers.",num);
         }
         else{
            printf("%d is composite number.", num);
         }
       
      }
     return 0;

}
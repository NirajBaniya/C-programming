//4. Write a program that asks a number and test the number whether it is multiple of 5 or not, divisible by 7 but not by eleven.

#include<stdio.h>
int main(){
     int num;

     printf("Enter the number: ");
     scanf("%d", &num);

     if(num % 5 == 0){
        printf("%d is divisible by 5.\n",num);
     }
     else
     {
        printf("%d is not divisible by 5.\n",num);
     }
     
     if(num % 7 == 0 && num % 11 != 0){
        printf("%d is divible by 7 but not divisible by 11.\n",num);
     }
     else
     {
        printf("%d is not divisible by 7 and not by 11 or divsible by both 7 and 11.\n",num);
     }
     

    return 0;
}
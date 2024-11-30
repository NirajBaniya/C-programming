
//  (d) using conditional operator.  (using ternary operator)

#include<stdio.h>
int main(){
     int num;

     printf("Enter the number: ");
     scanf("%d", &num);

     (num % 2 == 0)? printf("The number is even \n",num): printf("The number is odd", num);

     

    return 0;
}


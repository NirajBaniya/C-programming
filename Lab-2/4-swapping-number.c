// 4. Write a program to swap two variables values with and without using third variables.

// with using the third variables.
#include<stdio.h>
int main(){
     int a;
     int b;
     int temp;

     printf("Enter the value of a: ");
     scanf("%d",&a);
     printf("Enter the value of b: ");
     scanf("%d",&b);

    temp = a;
    a = b;
    b = temp;

    printf("The swap of number with third variable is: a = %d and b = %d\n", a, b);

    a = a + b;
     b = a - b;   
     a = a - b;

     printf("Swaping the number without using third variable: a = %d and b = %d", a, b);
    

   
    return 0;
}
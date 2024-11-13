// 1. Write a program to declare two integer and one float variables then initialize them to 10, 15, and 12.6. Also print the variable values in the screen.

#include<stdio.h>
int main(){
     int a = 10;
     int b = 15;
     float c = 12.6;

    printf("The value of a is %d\n", a);
    printf("The value of b is %d\n", b);
    printf("The value of c is %.1f\n", c);


    return 0;
}
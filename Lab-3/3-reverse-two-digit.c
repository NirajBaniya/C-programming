// 3. Write a program to get input of two or higher digit integer number and display in reverse order.

#include<stdio.h>
int main(){
    int digit, remainder , reverse = 0;

    printf("Enter a Digits: ");
    scanf("%d", &digit);

    while(digit != 0){
        remainder = digit % 10;
        reverse = reverse * 10 + remainder;
        digit = digit/10;

    }
     printf("The reverse digit is: %d\n",reverse);

    return 0;
}
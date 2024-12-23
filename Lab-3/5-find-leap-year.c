//5. Write a program to check whether the entered year is leap year or not (a year is leap if it is divisible by 4 and divisible by 100 or 400.)

#include<stdio.h>
int main(){
    int year;

    printf("Enter the year: ");
    scanf("%d", &year);

    if((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
    {
        printf("%d is leap year.\n", year);
    }
    else{
        printf("%d is not a leap year.\n", year);
    }
    
    return 0;
}
// To understand the programming using Loop & nested loop Statements (for, while, do-while)

// 1. Write a program to input two integer numbers and display the sum of even numbers between these two input numbers.

#include <stdio.h>
int main()
{
    int num1, num2, sum = 0, i;

    printf("Enter first number: ");
    scanf("%d", &num1);
    printf("Enter second number: ");
    scanf("%d", &num2);

     if (num1 > num2) {
        // Swap num1 and num2 if necessary
        int temp = num1;
        num1 = num2;
        num2 = temp;
    }

    for (i = num1; i <= num2; i++)
    {
        if (i % 2 == 0)
        {
            sum = sum + i;
        }
    }
    printf("the sum of even number is %d and %d is %d", num1, num2, sum);
    return 0;
}

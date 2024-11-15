//2. Write a C program to prompt the user to input 3 integer values and print these values in forward and reversed order.

#include<stdio.h>
int main(){
    int num1;
    int num2;
    int num3;

    printf("Enter the first value: ");
    scanf("%d",&num1);
     printf("Enter the second value: ");
    scanf("%d",&num2); 
     printf("Enter the third value: ");
    scanf("%d",&num3);


    printf("The number forward is: %d %d %d\n", num1, num2, num3);

    printf("The number reverse is: %d %d %d \n", num3, num2, num1);

    return 0;
}





// #include <stdio.h>

// int main() {
//     int num, reversed = 0, remainder;

//     // Input a number
//     printf("Enter an integer: ");
//     scanf("%d", &num);

//     // Loop to reverse the number
//     while (num != 0) {
//         remainder = num % 10;       // Get the last digit
//         reversed = reversed * 10 + remainder; // Build the reversed number
//         num /= 10;                  // Remove the last digit from num
//     }

//     // Display the reversed number
//     printf("Reversed number: %d\n", reversed);

//     return 0;
// }

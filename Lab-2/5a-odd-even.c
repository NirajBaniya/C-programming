//5. Write a program to check odd or even number (a) using modulus operator (b) using bitwise operator (c) without using bitwise and modulus operator (d) using conditional operator.

// (a) using modulus operator

#include<stdio.h>
int main(){
        int num;
        printf("Enter a number: ");
        scanf("%d", &num);

        if(num % 2 == 0){
            printf("The number is even.");
        }
        else{
            printf("The number is odd.");
        }      

    return 0;
}
//(c) without using bitwise and modulus operator

#include<stdio.h>
int main(){

     int num, answer;
     printf("Enter the number: ");
     scanf("%d", &num);

     answer = (num / 2)* 2 ;

     if(num == answer){
        printf("The number is even");
     }
     else{
        printf("The number is odd");
     }
    return 0;
}

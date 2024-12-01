// To understand the programming knowledge using Decision Statements (if, if-else, if- else if ladder, switch and GOTO)

//1. Write a program to find the largest and smallest among three entered numbers and also display whether the identified largest/smallest number is even or odd.

#include<stdio.h>
int main(){

    int a;
    int b;
    int c;
    int largest, smallest;

    printf("Enter the value of a: ");
    scanf("%d", &a);
    printf("Enter the value of b: ");
    scanf("%d", &b);
    printf("Enter the value of c: ");
    scanf("%d", &c);

    if(a>b){
        printf("A is greater.\n");
        largest = a;
    }
    else if(b>c){
        printf("B is greater.\n");
        largest = b;

    }
    else if(c>a){
        printf("C is greater.\n");
        largest = c;

    }
    else{
        printf("invalid");
    }

      

     if(a<b){
        printf("A is smaller.\n");
        smallest = a;
    }
    else if(b<c){
        printf("B is smaller.\n");
        smallest = b;
    }
    else if(c<a){
        printf("C is smaller.\n");
        smallest = c;
    }
    else{
        printf("invalid\n");
    }


    if(largest % 2 == 0)
    {
       printf("Largest value is even %d\n", largest);
    }
    else{
        printf("Largest value is odd %d\n", largest);
    }

   if(smallest % 2 == 0)
    {
       printf("Smallest value is even %d\n", smallest);
    }
    else{
        printf("Smallest value is odd %d\n", smallest);
    }


    return 0;
}
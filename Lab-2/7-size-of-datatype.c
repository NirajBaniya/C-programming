//7. Write a program to print the size of char, float, double and long double data types in C.

#include<stdio.h>
int main()
{
    printf("Size of char is: %d\n",sizeof(char));
    printf("Size of float is: %d \n", sizeof(float));
    printf("Size of double is: %d \n", sizeof(double));
    printf("Size of long double is: %d",sizeof(long double));
    
  return 0;
}
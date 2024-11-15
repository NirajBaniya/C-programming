
 // swaping the number without using variable..
#include <stdio.h>
int main()
{
    int a;
    int b;
     
    printf("Enter the value of a : ");
     scanf("%d",&a);

    printf("Enter the value of b : ");
     scanf("%d",&b);

     a = a + b;
     b = a - b;   
     a = a - b;

     printf("Swaping the number without using third variable: a = %d and b = %d", a, b);
    
    return 0;
}
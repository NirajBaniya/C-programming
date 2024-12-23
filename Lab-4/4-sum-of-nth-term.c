// 4. WAP to calculate the sum of the series p+p^2+p^3+p^4+....+p^n, where p is the base and n is the number of terms

#include<stdio.h>
#include<math.h>
int main(){
    int b, n, i, sum=0;
     
      printf("Enter the base of number (b): ");
      scanf("%d", &b);
      printf("Enter the n th of number (n): ");
      scanf("%d", &n);

      for ( i = 0; i <= n; i++)
      {
        sum = sum + pow(b, i); 
      }
      
      printf("The sum of series is: %d", sum);


    return 0;
}
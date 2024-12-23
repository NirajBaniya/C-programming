// 3. Write a program to display Fibonacci series of last term up to 300.

     #include<stdio.h>
     int main(){
         int first = 0, second = 1, next;

          printf("Fibonnaci series up to 300 is: ");
          printf("%d %d",first,second);
          
          

          next = first + second;

          while (next <= 300)
          {
             printf(" %d",next);
             first = second;
             second = next;
             next = first + second;
          }

        
          
          

        return 0;
     }
//2b. Write a program to check whether input alphabet is vowel or not using switch statement.

#include<stdio.h>
int main(){
   char ch;

   printf("Enter any Character: ");
   scanf("%c", &ch);

   switch (ch)
   {
   case 'a':
   case 'e':
   case 'i':
   case 'o':
   case 'u':
   case 'A':
   case 'E':
   case 'I':
   case 'O':
   case 'U':

    printf("%c is Vowel.\n", ch); 
    break;
   
   default:
     printf("%c is Consonant.\n",ch);
    break;
   }
   


return 0;
}
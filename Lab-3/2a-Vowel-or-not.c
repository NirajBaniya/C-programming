//2. Write a program to check whether input alphabet is vowel or not using if-else and switch statement.

#include<stdio.h>
int main(){
     char ch;

     printf("Enter any character: ");
     scanf("%c",&ch);


    if(ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u'  || ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U')
    {
        printf("%c is Vowel.\n",ch);
    }
    else{
        printf("%c is Consonant.\n", ch);
    }


    return 0;
}
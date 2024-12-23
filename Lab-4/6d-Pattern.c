// Pattern 


// Programming
// rogramming
// ogramming
// gramming
// ramming
// amming
// mming
// ming
// ing
// ng
// g



#include<stdio.h>
#include<string.h>

int main(){
       int i;
       char str[] = "Programming";
       int length = strlen(str);

       for(i=0; i < length; i++)
       {
           printf("%s\n",str + i);
       }
       
    return 0;
}
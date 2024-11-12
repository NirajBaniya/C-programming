// 6. Write a program to calculate simple interest for a given P=4000, T=2, R=5.5. (I =PTR/100)

#include<stdio.h>
int main(){
     float P = 4000;
     float T = 2;
     float R = 5.5;

     float SI = P * T * R / 100;

     printf("The simple intrest is: %.2f", SI);

    return 0;
}
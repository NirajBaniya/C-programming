// 4. Write a program to calculate area of a circle having its radius (r=5).

#include<stdio.h>
int main(){
    float pie = 3.14;
    float r = 5;

    float area = pie * r * r;

    printf("Area of circle is: %.2f", area);


    return 0;
}
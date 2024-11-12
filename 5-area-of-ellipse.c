//5. Write a program to calculate area of an ellipse having its axes (minor=4cm, major=6cm).

#include<stdio.h>
int main(){
    float minor = 4.0;
    float major = 6.0;
    float pie = 3.14;

    float ellipse = pie * minor * major;


    printf("Area of ellipse is %.2f cm", ellipse);

    return 0;
}
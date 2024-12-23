//5. Write a program in C to find all possible roots of quadratic equation ax^2+bx+c=0.

// #include<stdio.h>
// int main(){
     
//       int a,x,b,c,i;
//         printf("Enter the value of a: ");
//         scanf("%d",&a);
//         printf("Enter the value of x");
//     return 0;
// }

#include <stdio.h>
#include <math.h>  // For sqrt() function

int main() {
    float a, b, c, discriminant, root1, root2;

    // Input coefficients a, b, and c
    printf("Enter coefficients a, b, and c: ");
    scanf("%f %f %f", &a, &b, &c);

    // Calculate the discriminant
    discriminant = b * b - 4 * a * c;

    // Check the nature of the roots
    if (discriminant > 0) {
        // Two distinct real roots
        root1 = (-b + sqrt(discriminant)) / (2 * a);
        root2 = (-b - sqrt(discriminant)) / (2 * a);
        printf("Two distinct real roots: %.2f and %.2f\n", root1, root2);
    } 
    else if (discriminant == 0) {
        // One repeated real root
        root1 = -b / (2 * a);
        printf("One repeated real root: %.2f\n", root1);
    } 
    else {
        // Complex roots
        float realPart = -b / (2 * a);
        float imaginaryPart = sqrt(-discriminant) / (2 * a);
        printf("Two complex roots: %.2f + %.2fi and %.2f - %.2fi\n",
               realPart, imaginaryPart, realPart, imaginaryPart);
    }

    return 0;
}

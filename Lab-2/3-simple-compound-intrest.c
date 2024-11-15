//3. Write a program to calculate simple and compound interest.

#include <stdio.h>
#include <math.h> // Required for the pow() function

int main() {
    float p;
    float t;
    float r;
    float SI, CI;

    printf("Enter the Principal: ");
    scanf("%f", &p);

    printf("Enter the Time (in years): ");
    scanf("%f", &t);

    printf("Enter the Rate (per annum): ");
    scanf("%f", &r);

    // Simple Interest Calculation
    SI = p * t * r / 100;
    printf("The Simple Interest is %.2f\n", SI);

    // Compound Interest Calculation
    CI = p * pow((1 + r / 100), t) - p;
    printf("The Compound Interest is %.2f\n", CI);

    return 0;
}



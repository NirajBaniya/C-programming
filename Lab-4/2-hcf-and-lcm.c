// 2. Write a program to find GCD (greatest common divisor or HCF) and LCM (least common multiple) of two numbers.

#include <stdio.h>
int findhcf(int a, int b)
{
    while (b != 0)
    {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int findlcm(int a, int b, int hcf)
{
    return (a * b) / hcf;
}
int main()
{
    int num1, num2, hcf, lcm;
    printf("Enter the first Number: ");
    scanf("%d", &num1);
    printf("Enter the second Number: ");
    scanf("%d", &num2);

    hcf = findhcf(num1, num2);

    lcm = findlcm(num1, num2, hcf);

    printf("HCF of %d and %d is %d \n", num1, num2, hcf);

    printf("LCM of %d and %d is %d \n", num1, num2, lcm);

    return 0;
}


// #include <stdio.h>

// // Function to find GCD using Euclid's algorithm
// int findGCD(int a, int b) {
//     while (b != 0) {
//         int temp = b;
//         b = a % b;
//         a = temp;
//     }
//     return a;
// }

// // Function to find LCM
// int findLCM(int a, int b, int hcf) {
//     return (a * b) / hcf;  // Relationship: LCM(a, b) = (a * b) / GCD(a, b)
// }

// int main() {
//     int num1, num2, gcd, lcm;

//     // Input two numbers
//     printf("Enter two positive integers: ");
//     scanf("%d %d", &num1, &num2);

//     // Calculate GCD
//     gcd = findGCD(num1, num2);

//     // Calculate LCM using the GCD
//     lcm = findLCM(num1, num2, gcd);

//     // Output GCD and LCM
//     printf("GCD of %d and %d is: %d\n", num1, num2, gcd);
//     printf("LCM of %d and %d is: %d\n", num1, num2, lcm);

//     return 0;
// }

//6. Print the value of y for given x=2 & z=4 and analyze the output.

// y = x++ + ++x;
// y= ++x + ++x;
// y= ++x + ++x + ++x;
// y = x>z;
// y= x>z? x:z;
// y = x&z;
// y= x>>2 + z<<1;

#include <stdio.h>

int main() {
    int x = 2, z = 4, y;

    // First expression: y = x++ + ++x;
    y = x++ + ++x;
    printf("y = x++ + ++x; y = %d, x = %d\n", y, x); // y = 6, x = 4

    // Second expression: y = ++x + ++x;
    y = ++x + ++x;
    printf("y = ++x + ++x; y = %d, x = %d\n", y, x); // y = 11, x = 6

    // Third expression: y = ++x + ++x + ++x;
    y = ++x + ++x + ++x;
    printf("y = ++x + ++x + ++x; y = %d, x = %d\n", y, x); // y = 24, x = 9

    // Fourth expression: y = x > z;
    y = x > z;
    printf("y = x > z; y = %d\n", y); // y = 1

    // Fifth expression: y = x > z ? x : z;
    y = x > z ? x : z;
    printf("y = x > z ? x : z; y = %d\n", y); // y = 9

    // Sixth expression: y = x & z;
    y = x & z;
    printf("y = x & z; y = %d\n", y); // y = 0

    // Seventh expression: y = x >> 2 + z << 1;
    y = (x >> 2) + (z << 1);
    printf("y = x >> 2 + z << 1; y = %d\n", y); // y = 10

    return 0;
}
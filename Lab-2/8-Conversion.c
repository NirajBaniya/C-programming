//8. Write a C program to convert a given temperature from Celsius to Fahrenheit and Kelvin. The program should:

// Define symbolic constants for the conversion factors.
// Declare and initialize a variable for the temperature in Celsius.
// Calculate and print the temperature in Fahrenheit and Kelvin using macros (preprocessor directives)

// #define CELSIUS_TO_FAHRENHEIT(c) ((c) * 9.0 / 5.0 + 32)  // Conversion macro
// #define CELSIUS_TO_KELVIN(c) ((c) + 273.15)  // Conversion macro

#include <stdio.h>

// Define macros for conversion from Celsius to Fahrenheit and Kelvin
#define CELSIUS_TO_FAHRENHEIT(c) ((c) * 9.0 / 5.0 + 32)  // Conversion from Celsius to Fahrenheit
#define CELSIUS_TO_KELVIN(c) ((c) + 273.15)              // Conversion from Celsius to Kelvin

int main() {
    // Declare and initialize a variable for the temperature in Celsius
    float celsius;
    
    // Prompt the user to input temperature in Celsius
    printf("Enter the temperature in Celsius: ");
    scanf("%f", &celsius);

    // Calculate and print the temperature in Fahrenheit and Kelvin
    printf("Temperature in Fahrenheit: %.2f°F\n", CELSIUS_TO_FAHRENHEIT(celsius));
    printf("Temperature in Kelvin: %.2fK\n", CELSIUS_TO_KELVIN(celsius));

    return 0;
}

/*Develop a recursive function GCD (num1, num2) that accepts two integer
arguments. Write a C program that invokes this function to find the greatest
common divisor of two given integers.*/

#include <stdio.h>

// Recursive function to find GCD of two numbers
int GCD(int num1, int num2) {
    if(num2 == 0)
        return num1;          // Base case: if remainder is 0
    else
        return GCD(num2, num1 % num2);  // Recursive call
}

int main() {
    int a, b, result;

    printf("Enter two integers: ");
    scanf("%d %d", &a, &b);

    // Handle negative inputs
    if(a < 0) a = -a;
    if(b < 0) b = -b;

    result = GCD(a, b);

    printf("The Greatest Common Divisor (GCD) of %d and %d is: %d\n", a, b, result);

    return 0;
}

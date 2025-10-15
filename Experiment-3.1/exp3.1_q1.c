//WAP to take check if the triangle is valid or not. If the validity is established, do check if the triangle is isosceles, equilateral, right angle, or scalene. Take sides of the triangle as input from a user.
#include <stdio.h>
#include <math.h>   // for pow() and sqrt()

int main() {
    float a, b, c;

    // Input sides of the triangle
    printf("Enter three sides of the triangle: ");
    scanf("%f %f %f", &a, &b, &c);

    // Step 1: Check for validity (Triangle Inequality Theorem)
    if ((a + b > c) && (a + c > b) && (b + c > a)) {
        printf("\nThe triangle is VALID.\n");

        // Step 2: Check the type of triangle
        if (a == b && b == c) {
            printf("It is an EQUILATERAL triangle.\n");
        }
        else if (a == b || b == c || a == c) {
            printf("It is an ISOSCELES triangle.\n");
        }
        else {
            printf("It is a SCALENE triangle.\n");
        }

        // Step 3: Check if it is right-angled using Pythagoras theorem
        float a2 = a * a, b2 = b * b, c2 = c * c;
        if (fabs(a2 + b2 - c2) < 0.0001 || fabs(a2 + c2 - b2) < 0.0001 || fabs(b2 + c2 - a2) < 0.0001) {
            printf("It is also a RIGHT-ANGLED triangle.\n");
        }
    }
    else {
        printf("\nThe triangle is NOT VALID.\n");
    }

    return 0;
}
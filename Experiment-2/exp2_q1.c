//WAP a C program to calculate the area and perimeter of a rectangle based on its length and width.
#include <stdio.h>

int main() {
    float length, width, area, perimeter;

    // Get length and width from user
    printf("Enter length of the rectangle: ");
    scanf("%f", &length);
    printf("Enter width of the rectangle: ");
    scanf("%f", &width);

    // Calculate area and perimeter
    area = length * width;
    perimeter = 2 * (length + width);

    // Display results
    printf("Area of the rectangle: %.2f\n", area);
    printf("Perimeter of the rectangle: %.2f\n", perimeter);

    return 0;
}

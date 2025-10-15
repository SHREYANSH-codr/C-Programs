//WAP using ternary operator, the user should input the length and breadth of a rectangle, one has to find out which rectangle has the highest perimeter. The minimum number of rectangles should be three.
#include <stdio.h>

int main() {
    float length1, breadth1, length2, breadth2, length3, breadth3;
    float perimeter1, perimeter2, perimeter3;

    // Input dimensions for three rectangles
    printf("Enter length and breadth for Rectangle 1: ");
    scanf("%f %f", &length1, &breadth1);

    printf("Enter length and breadth for Rectangle 2: ");
    scanf("%f %f", &length2, &breadth2);

    printf("Enter length and breadth for Rectangle 3: ");
    scanf("%f %f", &length3, &breadth3);

    // Calculate perimeters
    perimeter1 = 2 * (length1 + breadth1);
    perimeter2 = 2 * (length2 + breadth2);
    perimeter3 = 2 * (length3 + breadth3);

    // Find the rectangle with the highest perimeter using ternary operator
    float maxPerimeter = (perimeter1 > perimeter2) ? perimeter1 : perimeter2;
    maxPerimeter = (maxPerimeter > perimeter3) ? maxPerimeter : perimeter3;

    // Print the result
    printf("The highest perimeter is: %.2f\n", maxPerimeter);

    return 0;
}

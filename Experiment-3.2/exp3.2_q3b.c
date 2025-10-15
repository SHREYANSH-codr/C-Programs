//WAP to generate the following set of output.
//b.  1
//   1 1
//  1 2 1
// 1 3 3 1
//1 4 6 4 1
#include <stdio.h>
int main() {
    int rows = 5; // Number of rows in the triangle

    for(int i = 0; i < rows; i++) {
        int number = 1; // First number in each row is always 1

        // Print leading spaces
        for(int space = 0; space < rows - i - 1; space++) {
            printf(" ");
        }

        // Print numbers in the row
        for(int j = 0; j <= i; j++) {
            printf("%d ", number);
            number = number * (i - j) / (j + 1); // Calculate next number in the row
        }

        printf("\n"); // Move to next line
    }

    return 0;
}
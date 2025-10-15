#include <stdio.h>

int main() {
    int i, j;
    int num = 1;       // Starting number
    int rows = 3;      // Number of rows in the triangle

    for(i = 1; i <= rows; i++) {
        // Print spaces before numbers
        for(j = 1; j <= rows - i; j++) {
            printf(" ");
        }

        // Print numbers
        for(j = 1; j <= i; j++) {
            printf("%d ", num);
            num++;
        }

        printf("\n");  // Move to next line
    }

    return 0;
}

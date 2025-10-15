//Declare variables within different code blocks (enclosed by curly braces) and test their accessibility within and outside those blocks.
#include <stdio.h>

int main() {
    int x = 10;  // Variable in main block
    printf("In main block: x = %d\n", x);

    // Start of a new block
    {
        int y = 20;  // Variable local to this inner block
        printf("Inside inner block: x = %d, y = %d\n", x, y);

        // Start of nested block
        {
            int z = 30; // Variable local to nested block
            printf("Inside nested block: x = %d, y = %d, z = %d\n", x, y, z);
        }
        // z is not accessible here; the following line would cause an error if uncommented
        // printf("%d", z);

    } // End of inner block
    // y is not accessible here; the following line would cause an error if uncommented
    // printf("%d", y);

    printf("Back in main block: x = %d\n", x);

    return 0;
}

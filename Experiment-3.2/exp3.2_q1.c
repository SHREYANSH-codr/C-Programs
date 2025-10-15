//WAP to enter numbers till the user wants. At the end, it should display the count of positive, negative, and Zeroes entered.
#include <stdio.h>

int main() {
    int num, positiveCount = 0, negativeCount = 0, zeroCount = 0;

    while (1) {
        printf("Enter a number (0 to stop): ");
        scanf("%d", &num);

        if (num == 0) {
            break;
        }
        else if (num > 0) {
            positiveCount++;
        }
        else {
            negativeCount++;
        }
    }

    // Display the counts
    printf("Positive numbers: %d\n", positiveCount);
    printf("Negative numbers: %d\n", negativeCount);
    printf("Zeroes: %d\n", zeroCount);

    return 0;
}

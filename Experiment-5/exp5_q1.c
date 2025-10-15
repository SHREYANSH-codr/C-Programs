//WAP to read a list of integers and store it in a single dimensional array. Write a C program to print the second largest integer in a list of integers.

#include <stdio.h>

int main() {
    int n, i;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter %d integers:\n", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int first, second;

    // Initialize first and second with smallest possible value
    first = second = -2147483648;  // Minimum value of int

    for(i = 0; i < n; i++) {
        if(arr[i] > first) {
            second = first;
            first = arr[i];
        }
        else if(arr[i] > second && arr[i] < first) {
            second = arr[i];
        }
    }

    if(second == -2147483648)
        printf("There is no second largest number (all elements are equal).\n");
    else
        printf("The second largest number is: %d\n", second);

    return 0;
}
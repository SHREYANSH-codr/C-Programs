//WAP to read a list of integers and store it in a single dimensional array. Write a C program to count and display positive, negative, odd, and even numbers in an array.

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
    first = second = -999999; // Initialize to a very small number

    for(i = 0; i < n; i++) {
        if(arr[i] > first) {
            second = first;
            first = arr[i];
        } 
        else if(arr[i] > second && arr[i] < first) {
            second = arr[i];
        }
    }

    if(second == -999999)
        printf("There is no second largest number (all elements are equal).\n");
    else
        printf("The second largest number is: %d\n", second);

    return 0;
}
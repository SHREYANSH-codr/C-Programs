//Write a program that prompts the user to enter their name and age.
#include <stdio.h>

int main() {
    char name[50];
    int age;

    // Prompt user for input
    printf("Enter your name: ");
    scanf("%49s", name);  // Read string safely (up to 49 characters)

    printf("Enter your age: ");
    scanf("%d", &age);    // Read integer value

    // Display output
    printf("\nHello %s!\n", name);
    printf("You are %d years old.\n", age);

    return 0;
}

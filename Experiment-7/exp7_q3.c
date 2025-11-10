/*Create a Book structure containing book_id, title, author name and price.
Write a C program to pass a structure as a function argument and print the
book details. */

#include <stdio.h>
#include <string.h>

// Define structure for Book
struct Book {
    int book_id;
    char title[100];
    char author[100];
    float price;
};

// Function to display book details
void displayBook(struct Book b) {
    printf("\n----- Book Details -----\n");
    printf("Book ID   : %d\n", b.book_id);
    printf("Title     : %s\n", b.title);
    printf("Author    : %s\n", b.author);
    printf("Price     : %.2f\n", b.price);
}

int main() {
    struct Book b1;

    // Input book details
    printf("Enter Book ID: ");
    if (scanf("%d", &b1.book_id) != 1) {
        printf("Invalid input for Book ID.\n");
        return 1;
    }
    while (getchar() != '\n'); // clear rest of line including newline

    printf("Enter Book Title: ");
    if (fgets(b1.title, sizeof(b1.title), stdin) == NULL) {
        printf("Error reading title.\n");
        return 1;
    }
    b1.title[strcspn(b1.title, "\n")] = '\0'; // remove newline if present

    printf("Enter Author Name: ");
    if (fgets(b1.author, sizeof(b1.author), stdin) == NULL) {
        printf("Error reading author.\n");
        return 1;
    }
    b1.author[strcspn(b1.author, "\n")] = '\0'; // remove newline if present

    printf("Enter Book Price: ");
    if (scanf("%f", &b1.price) != 1) {
        printf("Invalid input for price.\n");
        return 1;
    }

    // Pass structure to function
    displayBook(b1);

    return 0;
}

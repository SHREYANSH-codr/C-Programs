/*Create a union containing 6 strings: name, home_address, hostel_address,
city, state and zip. Write a C program to display your present address. */

#include <stdio.h>
#include <string.h>

// Define a union to store address information
union Address {
    char name[50];
    char home_address[100];
    char hostel_address[100];
    char city[50];
    char state[50];
    char zip[10];
};

int main() {
    union Address addr;

    // Since a union can hold only ONE value at a time,
    // we’ll use it to display the PRESENT address only.

    printf("Enter your name: ");
    fgets(addr.name, sizeof(addr.name), stdin);
    addr.name[strcspn(addr.name, "\n")] = '\0';

    printf("Enter your present (hostel/home) address: ");
    fgets(addr.hostel_address, sizeof(addr.hostel_address), stdin);
    addr.hostel_address[strcspn(addr.hostel_address, "\n")] = '\0';

    printf("Enter your city: ");
    fgets(addr.city, sizeof(addr.city), stdin);
    addr.city[strcspn(addr.city, "\n")] = '\0';

    printf("Enter your state: ");
    fgets(addr.state, sizeof(addr.state), stdin);
    addr.state[strcspn(addr.state, "\n")] = '\0';

    printf("Enter your ZIP code: ");
    fgets(addr.zip, sizeof(addr.zip), stdin);
    addr.zip[strcspn(addr.zip, "\n")] = '\0';

    // Display present address
    printf("\n------ Present Address ------\n");
    printf("Name   : %s\n", addr.name);
    printf("Address: %s\n", addr.hostel_address);
    printf("City   : %s\n", addr.city);
    printf("State  : %s\n", addr.state);
    printf("ZIP    : %s\n", addr.zip);

    return 0;
}

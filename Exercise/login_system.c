#include <stdio.h>

// Constants for readability and easy maintenance
#define MINIMUM_AGE 18
#define CORRECT_PASSWORD 3453
#define MAX_ATTEMPTS 3

int main(void) {
    int userPassword;
    int userAge;
    int attemptsLeft = MAX_ATTEMPTS;

    // 1. Age Check
    printf("Enter your age: ");
    scanf("%d", &userAge);

    if (userAge < MINIMUM_AGE) {
        puts("Access denied: you must be an adult.");
        return 0; // Exit program immediately
    }

    // 2. Password Check with Attempts
    printf("Enter password: ");
    scanf("%d", &userPassword);

    while (attemptsLeft > 1) { // Loop while there are extra attempts
        if (userPassword == CORRECT_PASSWORD) {
            break; // Exit loop if password is correct
        }

        attemptsLeft--;
        printf("Incorrect password. Try again, you have %d attempts left: ", attemptsLeft);
        scanf("%d", &userPassword);
    }

    // 3. Final Verification after loop
    if (userPassword == CORRECT_PASSWORD) {
        puts("\n========================");
        puts("     ACCESS GRANTED     ");
        puts("========================");
    } else {
        puts("\nAccess denied. Out of attempts.");
    }

    return 0;
}
}

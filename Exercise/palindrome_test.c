#include <stdio.h>
#define SIZE 80

// Function prototype
int isPalindrome(char array[], int left, int right);

int main(void) {
    
    char string[SIZE]; // Original string
    char copy[SIZE];   // Copy of the string without spaces/punctuation
    
    puts("Enter a word or phrase:");
    
    char c; 
    unsigned int count = 0; 
    
    // Get the input from the user
    while ((c = getchar()) != '\n' && count < SIZE - 1) {
        string[count++] = c;
    }
    string[count] = '\0'; // Null-terminate the string
    
    unsigned int copyCount = 0;
    
    // Create a copy of the string without spaces or punctuation
    for (unsigned int i = 0; string[i] != '\0'; ++i) {
        if (string[i] != ' ' && string[i] != ',' &&
            string[i] != '.' && string[i] != '!') {
            copy[copyCount++] = string[i];
        }
    }
    
    // Test if the cleaned copy is a palindrome
    if (isPalindrome(copy, 0, copyCount - 1)) {
        printf("\"%s\" is a palindrome\n", string);
    } else {
        printf("\"%s\" is NOT a palindrome\n", string);
    }

    return 0;
}

// Recursive function to check if a string is a palindrome
int isPalindrome(char array[], int left, int right) {
    
    // Base case: if pointers meet or cross, it's a palindrome
    if (left >= right) {
        return 1;
    } 
    // If characters at current positions don't match
    else if (array[left] != array[right]) {
        return 0;
    } 
    // Recursive step: move towards the center
    else {
        return isPalindrome(array, left + 1, right - 1);
    }
}

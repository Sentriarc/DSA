#include <stdio.h>
#include <ctype.h>

// Function to convert all lowercase characters to uppercase
void toUpperCase(char *str) {
    while (*str != '\0') {       // Loop until the null terminator
        if (islower(*str)) {     // Check if the character is lowercase
            *str = toupper(*str); // Convert to uppercase
        }
        str++;                   // Move to the next character
    }
}

int main() {
    char string[100];

    // Asking the user to input a string
    printf("Enter a string (max 99 characters): ");
    scanf("%99[^\n]", string);  // Read the string including spaces

    printf("Original string: %s\n", string);

    // Call the function to convert the string to uppercase
    toUpperCase(string);

    printf("Modified string (uppercase): %s\n", string);

    return 0;
}

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>  // Added to use strcat and strlen functions
#include <ctype.h>

// Define character sets
const char LOWERCASE[] = "abcdefghijklmnopqrstuvwxyz";
const char UPPERCASE[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
const char DIGITS[] = "0123456789";
const char SPECIAL[] = "!@#$%^&*()_+-=[]{}|;:'\",.<>?/";

void generatePassword(int length, int includeLower, int includeUpper, int includeDigits, int includeSpecial) {
    char password[length + 1];  // Array to store the password
    char charPool[100] = "";    // Pool of characters to choose from

    // Build the character pool based on user preferences
    if (includeLower) {
        strcat(charPool, LOWERCASE);
    }
    if (includeUpper) {
        strcat(charPool, UPPERCASE);
    }
    if (includeDigits) {
        strcat(charPool, DIGITS);
    }
    if (includeSpecial) {
        strcat(charPool, SPECIAL);
    }

    int poolSize = strlen(charPool);

    // Check if the pool has characters to choose from
    if (poolSize == 0) {
        printf("Error: No character types selected. Cannot generate password.\n");
        return;
    }

    // Seed the random number generator
    srand(time(0));

    // Generate password by selecting random characters from the pool
    for (int i = 0; i < length; i++) {
        password[i] = charPool[rand() % poolSize];
    }

    // Null-terminate the password string
    password[length] = '\0';

    printf("Generated Password: %s\n", password);
}

int main() {
    int length;
    int includeLower, includeUpper, includeDigits, includeSpecial;

    printf("Welcome to the Random Password Generator!\n");

    // Ask user for password length
    printf("Enter the desired password length: ");
    scanf("%d", &length);

    // Ask user for character types to include
    printf("Include lowercase letters? (1 for Yes, 0 for No): ");
    scanf("%d", &includeLower);

    printf("Include uppercase letters? (1 for Yes, 0 for No): ");
    scanf("%d", &includeUpper);

    printf("Include digits? (1 for Yes, 0 for No): ");
    scanf("%d", &includeDigits);

    printf("Include special characters? (1 for Yes, 0 for No): ");
    scanf("%d", &includeSpecial);

    // Generate and display the password
    generatePassword(length, includeLower, includeUpper, includeDigits, includeSpecial);

    return 0;
}

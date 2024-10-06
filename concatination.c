#include <stdio.h>

int main() {
    char astr[100];
    char bstr[100];
    char cstr[200];  // Make sure cstr is large enough to hold both strings
    int i, j, len = 0;

    // Get the first string
    printf("ENTER 1st string: ");
    scanf("%[^\n]", astr);  // Correct scanf format
    while (getchar() != '\n');  // Clear the buffer

    // Get the second string
    printf("ENTER 2nd string: ");
    scanf("%[^\n]", bstr);  // Correct scanf format

    // Copy astr to cstr
    for (i = 0; astr[i] != '\0'; i++) {
        cstr[i] = astr[i];
        len++;  // Keep track of the length of astr
    }

    // Copy bstr to cstr, starting where astr ended
    for (j = 0; bstr[j] != '\0'; j++, len++) {
        cstr[len] = bstr[j];
    }

    // Add the null terminator at the end of cstr
    cstr[len] = '\0';

    // Print the concatenated string
    printf("Concatenated string: %s\n", cstr);

    return 0;
}

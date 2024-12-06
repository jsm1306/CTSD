#include <stdio.h>
#include <string.h>

int main() {
    char str1[50], str2[50];

    // Input first string
    printf("Enter the first string: ");
    scanf("%s", str1);

    // Input second string
    printf("Enter the second string: ");
    scanf("%s", str2);

    // Compare strings and swap if necessary
    if (strcmp(str1, str2) > 0) {
        // Swap strings
        char temp[50];
        strcpy(temp, str1);
        strcpy(str1, str2);
        strcpy(str2, temp);
    }

    // Display strings in alphabetical order
    printf("Strings in alphabetical order: %s, %s\n", str1, str2);

    return 0;
}

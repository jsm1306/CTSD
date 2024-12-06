#include <stdio.h>

int main() {
    long long int number; // Assuming the input number can be a long long integer
    int hasZero = 0; // Flag to indicate whether 0 is present

    printf("Enter a number: ");
    scanf("%lld", &number);

    // Handle the case where the input number is negative
    if (number < 0) {
        number = -number; // Convert it to a positive number
    }

    while (number > 0) {
        int digit = number % 10; // Get the last digit of the number

        if (digit == 0) {
            hasZero = 1; // Set the flag to 1 if 0 is found
            break; // Exit the loop early, as we don't need to check further
        }

        number /= 10; // Remove the last digit
    }

    if (hasZero) {
        printf("The digit 0 is present in the number.\n");
    } else {
        printf("The digit 0 is not present in the number.\n");
    }

    return 0;
}


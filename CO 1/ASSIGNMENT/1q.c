#include <stdio.h>

int main() {
    int number;
    printf("Enter a 4-digit number: ");
    scanf("%d", &number);

    int lastDigit = number % 10;
    number /= 10;
    int thirdLastDigit = number % 10;
    number /= 10;
    int secondLastDigit = number % 10;
    number /= 10;
    int firstDigit = number % 10;

    if (firstDigit == 5 && secondLastDigit == 5 && thirdLastDigit == 5) {
        printf("Result: YES\n");
    } else if (secondLastDigit == 5 && thirdLastDigit == 5 && lastDigit == 5) {
        printf("Result: YES\n");
    } else {
        printf("Result: NO\n");
    }

    return 0;
}

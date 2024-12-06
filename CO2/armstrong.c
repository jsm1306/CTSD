#include <stdio.h>
#include <math.h>

int main() {
    int num, originalNum, r, n = 0, result = 0;

   printf("Enter a number: ");
    scanf("%d", &num);

    for (originalNum = num; originalNum != 0; originalNum /= 10;) 
	{
        
        ++n;
    }


    // Calculate the Armstrong number
    for (originalNum = num; originalNum != 0; originalNum /= 10;) {
        r = originalNum % 10;
        result += pow(r, n);
        
    }

    // Check if num is an Armstrong number
    if (result == num)
        printf("%d is an Armstrong number.", num);
    else
        printf("%d is not an Armstrong number.", num);

    return 0;
}


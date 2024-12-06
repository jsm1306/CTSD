#include<stdio.h>
int main() {
    int i, s, rows,j;
    printf("Enter the number of rows\n");
    scanf("%d", &rows);
 
    for (i = 0; i <= rows; i++) 
  {   
        for ( s= 0; s < i; s++) {
            printf(" ");
        }
        /* Printing stars */
        for (j = 0;j <= (rows-i)-1; j++) {
            printf(" *");
        }
        printf("\n");
    }
    return 0;
}
//Inverted Pyramid

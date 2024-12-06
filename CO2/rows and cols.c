#include <stdio.h>

int main() {
    int rows, columns,i,j;
    scanf("%d %d", &rows, &columns);

    int start = rows * columns;
    int end = start - columns + 1;

    for (i = 0; i < rows; i++) {
        for (j = start; j >= end; j--) {
            printf("%d ", j);
        }
        printf("\n");
        start = end - 1;
        end -= columns;
    }

    return 0;
}

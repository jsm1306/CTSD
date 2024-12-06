#include<stdio.h>
int main()
{
  int i, j, rows, cols;
  printf("Enter number of rows and cols: \n");
  scanf("%d %d", &rows, &cols);
  for(i=1;i<=rows;i++)
  {char k='A';
    for(j=1;j<=cols;j++)
    {
      printf("%c",k++);
    } printf("\n");
  }
}

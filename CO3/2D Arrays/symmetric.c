//symmetric of matrix
#include<stdio.h>
int main()
{
  int i,j,n,c=0;
  printf("Enter number of rows for the matrix: ");
  scanf("%d",&n);
  int a[n][n];
  printf("Enter data to insert in matrix: \n");
  for(i=0;i<n;i++)
  {
    for(j=0;j<n;j++)
    {
      scanf("%d",&a[i][j]);
    }
  }
  printf("The matrix is:\n");
  for(i=0;i<n;i++)
  {
    for(j=0;j<n;j++)
    {
      printf("%d ",a[i][j]);
    }printf("\n");
  }
  for(i=0;i<n;i++)
  {
    for(j=0;j<n;j++)
    {
      if(a[i][j]==a[j][i])
      {
        c++;
      }
    }
  }
  if(c==n*n)
  printf("The given matrix is symmetric");
  else
  printf("The given matrix is symmetric");
}

#include<stdio.h>
int main()
{
  int i,j,s=0,n;
  printf("enter number of rows of matrix");
  scanf("%d",&n);
   int a[n][n];
  printf("enter first matrix data\n");
    for(i=0;i<n;i++)
    {
      for(j=0;j<n;j++)
      {
        scanf("%d",&a[i][j]);
      }
    }
    printf("first matrix\n");
    for(i=0;i<n;i++)
    {
      for(j=0;j<n;j++)
      {
        printf("%d  ",a[i][j]);
      }
      printf("\n");
    }
    for(i=0;i<n;i++)
    {
      for(j=0;j<n;j++)
      {
        if(((i==0)||(j==0)||(j==n-1)||(i==n-1)))
        {
        	s=s+a[i][j];
		}
      }
    }
    printf("Sum is %d",s);
}

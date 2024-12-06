#include<stdio.h>
int main()
{
  int m1,i,j,sum=0,n1,m2,n2;
  printf("enter number of rows and colums of first matrix");
  scanf("%d%d",&m1,&n1);
   int a[m1][n1];
  printf("enter first matrix data\n");
    for(i=0;i<m1;i++)
    {
      for(j=0;j<n1;j++)
      {
        scanf("%d",&a[i][j]);
      }
    }
    printf("first matrix\n");
    for(i=0;i<m1;i++)
    {
      for(j=0;j<n1;j++)
      {
        printf("%d  ",a[i][j]);
      }
      printf("\n");
    }
  printf("enter number of rows and colums of second matrix");
  scanf("%d%d",&m2,&n2);
    int b[m2][n2];
  printf("enter second matrix data\n");
    for(i=0;i<m2;i++)
    {
      for(j=0;j<n2;j++)
      {
        scanf("%d",&b[i][j]);
      }
    }
    printf("second matrix\n");
	for(i=0;i<m2;i++)
    {
      for(j=0;j<n2;j++)
      {
        printf("%d  ",b[i][j]);
      }
      printf("\n");
    }
    if((m1==m2)&&(n1==n2))
    {
    	printf("Matrix addition is:\n");
    	for(i=0;i<m2;i++)
    	{
    		for(j=0;j<n2;j++)
    		{
    			printf("%d  ",a[i][j]+b[i][j]);
			} printf("\n");
		}
	}
}

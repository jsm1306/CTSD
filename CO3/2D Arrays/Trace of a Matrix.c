#include<stdio.h>
int main()
{
  int m1,i,j,sum=0;
  printf("enter number of rows and colums of first matrix");
  scanf("%d%d",&m1,&m1);
  int a[m1][m1];
  //printf("enter first matrix data\n");
    for(i=0;i<m1;i++)
    {
      for(j=0;j<m1;j++)
      {
        scanf("%d",&a[i][j]);
      }
    }
   // printf("first matrix\n");
    for(i=0;i<m1;i++)
    {
      for(j=0;j<m1;j++)
      {
        printf("%d  ",a[i][j]);
      }
      printf("\n");
    }
    
    printf("Trace of matrix is\n");
    for(i=0;i<m1;i++)
    {
      for(j=0;j<m1;j++)
      {
      	if(i==j)
      	{
         sum=sum+a[i][j];
     }    
      }
  }printf("%d",sum);
  
}

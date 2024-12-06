#include<stdio.h>
void accept(int m,int n,int a[][n])
{
  int i,j;
printf("Enter data for %d rows and %d cols",m,n);
  for(i=0;i<m;i++)
  {
    for(j=0;j<n;j++)
    {
      scanf("%d",&a[i][j]);
    }
  }  
}
void display(int m,int n,int a[][n])
{
int i,j;
  printf("Matrix is\n");
  for(i=0;i<m;i++)
  {
    for(j=0;j<n;j++)
    {
      printf("%d  ",a[i][j]);
    }
    printf("\n");
  }
}
void transpose(int m,int n,int a[][n])
{
  int i,j;
  printf("Transpose form is\n");
  for(i=0;i<n;i++)
  {
    for(j=0;j<m;j++)
    {
      printf("%d  ",a[j][i]);
    }
    printf("\n");
   }
}
int main()
{
  int m,n;
  printf("Enter number of rows and cols");
  scanf("%d %d",&m,&n);
  int a[m][n],i,j;
  accept(m,n,a);
  display(m,n,a);
  transpose(m,n,a);
  if(a[i][j]==a[j][i])
  {
  	printf("Symmetric matrix");
  } else
  {
  	printf("Not Symmetric matrix");
  }
  }

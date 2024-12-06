#include<stdio.h>
void accept(int m,int n,int a[][n])
{
	int i,j;
	printf("Enter data for %d rows %d cols",m,n);
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
  //printf("Matrix is\n");
  for(i=0;i<m;i++)
  {
    for(j=0;j<n;j++)
    {
      printf("%d  ",a[i][j]);
    }
    printf("\n");
  }
}
void multiply(int m1,int n1,int m2,int n2, int a[][n1], int b[][n2], int c[][n2])
{
	int i,j,k;
		for(i=0;i<m1;i++)
		{
			for(j=0;j<n2;j++)
			{ c[i][j]=0;
				for(k=0;k<n1;k++)//k<m2
				{
					c[i][j]=c[i][j]+a[i][k]*b[k][j];
				}
			}
		}
}
int main()
{
	int m1,n1,m2,n2;
	printf("Enter number of rows and columns of first matrix: ");
	scanf("%d %d",&m1,&n1);
	int a[m1][n1];
	accept(m1,n1,a);
	display(m1,n1,a);
	printf("Enter number of rows and columns of second matrix: ");
	scanf("%d %d",&m2,&n2);
	int b[m2][n2];
	accept(m2,n2,b);
	display(m2,n2,b);
	if(n1==m2)
	{
	int c[m1][n2];//resultant matrix
	multiply(m1,n1,m2,n2,a,b,c);
	printf("Resultant multiplication matrix is:\n");
	display(m1,n2,c);
}
else
{
	printf("Matrix multiplication not possible");
}
}

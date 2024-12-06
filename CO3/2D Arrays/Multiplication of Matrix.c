#include<stdio.h>
int main()
{
	int m1,n1,m2,n2,i,j,k;
	printf("Enter number of rows and columns of first matrix: ");
	scanf("%d %d",&m1,&n1);
	printf("Enter number of rows and columns of second matrix: ");
	scanf("%d %d",&m2,&n2);
	int a[m1][n1];
	printf("Enter data for %d rows %d cols",m1,n1);
	for(i=0;i<m1;i++)
	{
		for(j=0;j<n1;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	printf("Matrix is \n");
	for(i=0;i<m1;i++)
	{
		for(j=0;j<n1;j++)
		{
			printf("%d  ",a[i][j]);
		} printf("\n");
	}
	int b[m2][n2];
	printf("Enter data for %d rows %d cols",m2,n2);
	for(i=0;i<m2;i++)
	{
		for(j=0;j<n2;j++)
		{
			scanf("%d",&b[i][j]);
		}
	}
	printf("Matrix is \n");
	for(i=0;i<m2;i++)
	{
		for(j=0;j<n2;j++)
		{
			printf("%d  ",b[i][j]);
		} printf("\n");
	}
	if(n1==m2)
	{ int c[i][j];
		for(i=0;i<m1;i++)
		{
			for(j=0;j<n2;j++)
			{ c[i][j]=0;
				for(k=0;k<n1;k++)//k<m2
				{
					c[i][j]=c[i][j]+a[i][k]*b[k][j];
				}
			}
		} printf("Result Matrix is\n");
		for(i=0;i<m1;i++)
		{
			for(j=0;j<n2;j++)
			{
				printf("%d  ",c[i][j]);
			} printf("\n");
		}
	} else
	{
		printf("Matrix multiplication not possible");
	}
}

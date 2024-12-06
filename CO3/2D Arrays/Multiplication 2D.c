#include<stdio.h>
int main()
{
	int i, j, m1, n1, m2, n2, k;
	printf("Enter rows and columns for first matrix: ");
	scanf("%d %d",&m1,&n1);
	int a[m1][n1];
	printf("Enter data for 1st matrix:");
	for(i=0;i<m1;i++)
	{
		for(j=0;j<n1;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	printf("First Matrix is\n");
	for(i=0;i<m1;i++)
	{
		for(j=0;j<n1;j++)
		{
			printf("%d  ",a[i][j]);
		} printf("\n");
	}
	printf("Enter rows and columns for second matrix: ");
	scanf("%d %d",&m2,&n2);
	int b[m2][n2];
		printf("Enter data for 2nd matrix:");
	for(i=0;i<m2;i++)
	{
		for(j=0;j<n2;j++)
		{
			scanf("%d",&b[i][j]);
		}
	}
	printf("Second Matrix is\n");
	for(i=0;i<m2;i++)
	{
		for(j=0;j<n2;j++)
		{
			printf("%d  ",b[i][j]);
		} printf("\n");
	}
	if(n1==m2)
	{
		printf("Matrix multiplication is\n");
		int c[i][j];
		for(i=0;i<m1;i++)
		{
			for(j=0;j<n2;j++)
			{ c[i][j]=0;
				for(k=0;k<m2;k++)//k<n1
				{
					c[i][j]=c[i][j]+a[i][k]*b[k][j];
				}
			}
		} for(i=0;i<m1;i++)
		{
			for(j=0;j<n2;j++)
			{
				printf("%d  ",c[i][j]);
			} printf("\n");
		}
	}else
	{
		printf("Matrix Multiplication not possible");
	}
}

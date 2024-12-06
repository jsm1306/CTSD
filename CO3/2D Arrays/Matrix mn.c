#include<stdio.h>
int main()
{
	int m,n,i,j;
	printf("Enter number of rows and columns: ");
	scanf("%d %d",&m,&n);
	int a[m][n];
	printf("Enter data for %d rows %d cols",m,n);
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	printf("Matrix is \n");
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("%d  ",a[i][j]);
		} printf("\n");
	}
	printf("\nTranspose Matrix is :\n");
	for(i=0;i<n;i++)
	{
		for(j=0;j<m;j++)
		{
			printf("%d  ",a[j][i]);
		} printf("\n");
	} 
	printf("New Matrix is:\n");
	for(i=0;i<n;i++)
	{
		for(j=0;j<m;j++)
		{
			printf("%d  ",a[i][j]*a[j][i]);
		} printf("\n");
	}
}

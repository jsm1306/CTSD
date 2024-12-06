#include<stdio.h>
int i,j,k;
void accept(int m,int n,int a[][n])
{ 
	printf("Enter data to insert in the matrix: \n");
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
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("%d ",a[i][j]);
		} printf("\n");
	}
}
void add(int m1, int n1, int m2,int n2,int a[][n1],int b[][n2])
{
	for(i=0;i<m1;i++)
	{
		for(j=0;j<n1;j++)
		{ 
		   printf("%d ",a[i][j]+b[i][j]);
		}
	}
}
int main()
{
	int m1,n1,m2,n2;
	printf("Enter number of rows and columns for 1st matrix: ");
	scanf("%d %d",&m1,&n1);
	int a[m1][n1];
	accept(m1,n1,a);
	printf("The resultant matrix is:\n");
	display(m1,n1,a);
	printf("Enter number of rows and columns for 2nd matrix: ");
	scanf("%d %d",&m2,&n2);
	int b[m2][n2];
	accept(m2,n2,b);
	printf("The resultant matrix is:\n");
	display(m2,n2,b);
	if(m1==m2 && n1==n2)
	{ int c[m1][n1];
		printf("Resultant matrix addition is:\n");
		add(m1,n1,m2,n2,a,b);
		display(m1,n1,c);
	} else
	{
		printf("Matrix addition not possible");
	}
}

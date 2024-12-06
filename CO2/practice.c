#include<stdio.h>
int main()
{
	int i, j,n,m;
	int k=n*m;
	printf("Enter number of rows: ");
	scanf("%d %d",&n, &m);
	for(i=1;i<=n;i++)
	{ 
		for(j=1;j<=m;j++)
		{
			printf("%d",k--);
		} printf("\n");
	}
}

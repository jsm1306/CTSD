#include<stdio.h>
int main()
{
	int m, n, i, j,k=1;
	printf("Enter number of rows and columns: ");
	scanf("%d %d", &m, &n);
	for(i=1;i<=m;i++)
	{
		for(j=1;j<=n;j++)
		{
			printf("%d ",k++);
		}
		printf("\n");
	}
}

#include<stdio.h>
int main()
{
	int i,j,n;
	char k;
	printf("Enter number of rows: ");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		k=n-i+1;
		for(j=i;j<=n;j++)
		{
			printf("%c ",k);
		}printf("\n");
	}
}

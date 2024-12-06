#include<stdio.h>
int main()
{
	int i,n,k,space;
	printf("Enter number of rows: \n");
	scanf("%d", &n);
	for(i=1;i<=n;i++)
	{
		for(space=1;space<=n-i;space++)
		{
			printf("  ");
		}
		for(k=1;k<=2*i - 1;k++)
		{
			printf(" *");
		} printf("\n");
	}
}

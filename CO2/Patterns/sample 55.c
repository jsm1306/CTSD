#include<stdio.h>
int main()
{
	int i, j, n;
	char k='A';
	printf("Enter number of rows: ");
	scanf("%d", &n);
	for(i=1;i<=n;i++)
	{ 
		for(j=1;j<=n;j++)
		{
			if(i>j)
			{
				printf("  ");
			} else
			{
				printf(" *");
			}
		} printf("\n");
	}

}

#include<stdio.h>
int main()
{
	int m, n, i, j;
	printf("Enter number of rows and columns: ");
	scanf("%d %d", &m, &n);
	for(i=1;i<=m;i++)
	{
		for(j=1;j<=n;j++)
		{
			if((i==j))
			 {
				printf("* ");
			 } else if(j==(n-i)+1)
			 	{
			 	printf("* ");	
				 }
			 else
			  {
					printf("  ");
				 }
			 }
			 printf("\n");
		}
}

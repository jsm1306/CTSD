#include<stdio.h>
int main()
{
	int rows,i,j;
	printf("Enter number of rows: ");
	scanf("%d", &rows);
	for(i=1;i<=rows;i++)
	{ 
		for(j=1;j<=rows;j++)
		{/*----*
		   ---**
		   --***
		   -****
		   ***** here i=1,j=5-->i+j=6... which is greater than number of rows (here it is 5). 
		   so in those places we need to print * if the above condition is not true then print space*/
			if(i+j>rows)
			{
				printf(" *");
			}
		else
		{
			printf("  ");
		}
		} printf("\n");
	}
}

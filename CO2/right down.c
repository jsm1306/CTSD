#include<stdio.h>
int main()
{
	int rows,i,j;
	printf("Enter number of rows");
	scanf("%d", &rows);
	for(i=1;i<=rows;i++)
	{
		for(j=1;j<=rows;j++)
		{
			if(i>j)// when i is greater than j, give space
			{
				printf("  ");
			}
		else
		{
			printf("* ");
		}
		} printf("\n");
	}
}

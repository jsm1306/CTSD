#include<stdio.h>
int main()
{
	int rows,i,j;
	printf("Enter number of rows");
	scanf("%d", &rows);
	for(i=1;i<=rows;i++)
	{
		for(j=i;j<=rows;j++)//when i is 3, it means from 3 to n, where n is number of rows
		// 3 4 5 will be displayed
		{
			printf("* ");
		} printf("\n");
	}
}

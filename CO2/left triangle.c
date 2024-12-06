#include<stdio.h>
int main()
{
	int rows,i,j;
	printf("Enter number of rows");
	scanf("%d", &rows);
	for(i=1;i<=rows;i++)
	{
		for(j=1;j<=i;j++)/*as row number increases, column number also increases with rows
		//j will start from 1, its limit is upto row number*/
		{
			printf("* ");
		} printf("\n");
	}
}

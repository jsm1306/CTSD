#include<stdio.h>
int main()
{
	int rows,i,j;
	printf("enter no. of rows: ");
	scanf("%d", &rows);
	for(i=1;i<=rows;i++)
	{ 
		for(j=1;j<=rows;j++)
		{
			if(i+j==rows+1)
			{
				printf("%d ",i);
			}
			else
			{
				printf(". ");
			}
		}printf("\n");
	}
}
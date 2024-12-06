#include<stdio.h>
int main()
{
	int rows,i,j;
	char k='A';
	printf("Enter number of rows");
	scanf("%d", &rows);
	for(i=1;i<=rows;i++)
	{
		for(j=i;j<=rows;j++)//to get different value in each line, initialise the char outside the loop
		{
			printf("%c ",k);
		} 
		k++;
		printf("\n");
	}
}

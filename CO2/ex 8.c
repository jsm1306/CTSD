#include<stdio.h>
int main()
{
	int rows,i,j;
	char k='Z';
	printf("Enter number of rows: ");
	scanf("%d", &rows);
	for(i=1;i<=rows;i++)//to get same value repeated in every line, initialise char inside the outer loop
	{char k='Z';
		for(j=i;j<=rows;j++)
		{
			printf("%c ",k--);
		} 
		printf("\n");
	}
}

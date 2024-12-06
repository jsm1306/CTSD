#include<stdio.h>
int main()
{
	int rows,i,j;
	printf("enter no. of rows: ");
	scanf("%d", &rows);
	for(i=1;i<=rows;i++)
	{ char k='A';
		for(j=1;j<=rows;j++)
		{
			printf("%c",k++);
		}printf("\n");
	}
}

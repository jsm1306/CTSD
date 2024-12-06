#include<stdio.h>
int main()
{
	int i,j, coef, r, space, rows;
	printf("Enter number of rows: ");
	scanf("%d", &rows);
	for(i=0;i<rows;i++)
	{
		for(space=1;space<=rows-i;space++)
		{
			printf("   ");
		}
		for(j=0;j<=i;j++)
		{
			if(i==0||j==0)
			{
				coef=1;
			} else
			{
				coef=coef*(i-j+1)/j;
			} printf("%6d",coef);
		} printf("\n");
	}
}

#include<stdio.h>
int main()
{
	int rows,i,j,k;
	printf("Enter number of rows");
	scanf("%d", &rows);
	k=((rows)*(rows+1))/2;
	for(i=1;i<=rows;i++)
	{
		for(j=i;j<=rows;j++)
		{
			printf("%d ", k--);
		} printf("\n");
	}
}

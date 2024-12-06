#include<stdio.h>
int main()
{
	int m, i, j;
	printf("Enter number of rows: ");
	scanf("%d", &m);
	for(i=1;i<=m;i++)
	{
		for(j=1;j<=m;j++)
		{
			if((i==1)||(i==m))
			 {
				printf("* ");
			 } 
			 else if(i==j)
			 {
			 	printf("* ");
			 } else if(i+j==m+1)
			 {
			 	printf("* ");
			 }
			 else
			  {
				 if((j==1)||(j==m))
				 {
					printf("* ");
				 }
				 else
				 {
					printf("  ");
				 }
			 }
		}
		printf("\n");
	}
}

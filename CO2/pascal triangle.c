#include<stdio.h>
int main()
{
	int i,j,n,coef,space;
	printf("Enter number of rows: ");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		for(space=1;space<=n-i;space++)
		{
			printf("  ");
		}
		for(j=0;j<=i;j++)
		{
		 	if(i==0 || j==0)
		 	{
		 		coef=1;
			}else
			{
			 	coef=coef*(i-j+1)/j;
			}
			printf("%4d",coef);
		}printf("\n");
	}
}
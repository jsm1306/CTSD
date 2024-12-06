#include<stdio.h>
int main()
{
	int n,s,j,i;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		for(s=1;s<=n-i;s++)
		{
			printf("  ");
			
		}
		for(j=1;j<=2*(i)+1;j++)
		{
			if(i==n-1 || i==0 )
			{
				printf("* ");
			}
			else
			{
			
			if ( j==1 || j==2*(i)+1 ) {
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

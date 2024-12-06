#include<stdio.h>
int main()
{
	int i,j,n;
	printf("Enter number of rows: ");
	scanf("%d", &n);
	for(i=1;i<=n;i++)
	{ int k=i;
		for(j=1;j<=n;j++)
		{
			if(k==0)
			{
				printf("%d",n);
			} else
			printf("%d",k);
			k=(k+1)%n;
		} printf("\n");
	}
}

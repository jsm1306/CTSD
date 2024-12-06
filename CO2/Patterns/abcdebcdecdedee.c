#include<stdio.h>
int main()
{
	int i,j,n;
	char k='A',c;
	printf("Enter number of rows: ");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		char c=k+i-1;;
		for(j=1;j<=n;j++)
		{
			if(i+j>n+1)
			printf("  ");
			else
			printf("%c ",c++);
		}printf("\n");
	}
}

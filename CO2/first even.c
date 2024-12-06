#include<stdio.h>
int main()
{
	int n, i;
	printf("Enter n value");
	scanf("%d", &n);
	i=2;
	while(i<=n)
	{
		printf("\n%d", i);
		i+=2;
	}
}

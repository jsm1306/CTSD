#include<stdio.h>
int main()
{
	int n, i;
	printf("Enter n value");
	scanf("%d", &n);
	(n%2==0)?(i=n):(i=n-1);
	while(i)
	{
		printf("\n%d", i);
		i-=2;
	}
}

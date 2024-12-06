#include<stdio.h>
int main()
{
	int n,p=1, i;
	printf("Enter a number");
	scanf("%d", &n);
	for(i=1;i<=n;i++)
	{
		p*=i;
	}
	printf("The factorial of %d is %d", n, p);
}


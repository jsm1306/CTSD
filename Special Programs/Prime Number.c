#include<stdio.h>
int main()
{
	int i, n, r;
	printf("Enter a number: ");
	scanf("%d", &n);
	for(i=2;i<=n;i++)
	{
		if(n%i==0)
		{
			break;
		}
	} if(i<=n/2)
	{
		printf("%d is not a prime number",n);
	} else
	{
		printf("%d is a prime number",n);
	}
}

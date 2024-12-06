#include<stdio.h>
int main()
{
	int i, n, r;
	printf("Enter a number: ");
	scanf("%d", &n);
	for(i=2;i<=n/2;i++)
	{
		r=n%i;
		if(r==0)
		{
			break;
		}
	}
	if(i<=n/2)
	{
		printf("%d is not a Prime number",n);
	}else
	{
		printf("%d is a Prime number",n);
	}
}

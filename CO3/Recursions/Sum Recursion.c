#include<stdio.h>
int sum(int n)
{
	if(n==0)
	{
		return 0;
	}
	else
	{
		return n+sum(n-1);
	}
}
int main()
	{
		int n, f;
		printf("Enter a number: ");
		scanf("%d",&n);
		f=sum(n);
		printf("Sum of %d natural numbers is %d",n,f);
	}

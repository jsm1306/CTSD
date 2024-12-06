#include<stdio.h>
int pofdigits(int n)
{
	if(n==0)
	{
		return 0;
	}
	else
	{
		return n%10 * pofdigits(n/10);
	}
}
int main()
	{
		int n, f;
		printf("Enter a number: ");
		scanf("%d",&n);
		f=pofdigits(n);
		printf("Product of digits of %d is %d",n,f);
	}

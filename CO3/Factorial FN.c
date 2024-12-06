#include<stdio.h>
int factorial(int n)
{
	int f, i, s;
	for(i=1,f=1;i<=n;i++)
	{
		f=f*i;
	}
	return f;
}
int main()
{
	int x,s;
	printf("Enter a number: ");
	scanf("%d", &x);
	s=factorial(x);
	printf("Factorial= %d",s);
}

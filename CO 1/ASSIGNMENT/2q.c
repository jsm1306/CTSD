#include<stdio.h>
int main()
{
	int x;
	printf("Enter a number");
	scanf("%d", &x);
	if(x%2==0)
	{
		printf("The square of number is %d", x*x);
	}
	else
	{
		printf("The cube of number is %d", x*x*x);
	}
}

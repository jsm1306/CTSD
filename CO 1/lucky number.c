#include<stdio.h>
int main()
{
	int x;
	printf("Enter the number");
	scanf("%d", &x);
	if((x%2==0) || (x%9==0))
	{
		printf("%d is lucky", x);
	} else
	{
		printf("%d is unlucky", x);
	}
}

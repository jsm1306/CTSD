#include<stdio.h>
int main()
{
	int n;
	printf("Enter the number");
	scanf("%d", &n);
	if(n>0)
	{
		printf("POSITIVE");
	}
	else if(n<0)
	{
	printf("NEGATIVE");	
	}
	else
	{
		printf("NEUTRAL");
	}
}

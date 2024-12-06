#include<stdio.h>
int main()
{
	int x;
	printf("Enter your age");
	scanf("%d" , &x);
	if(x>=18)
	{
		printf("Elgible to vote", x);
	}
	else
	{
		printf("Not Elgible to vote", x);
	}
}

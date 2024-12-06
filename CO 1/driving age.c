#include<stdio.h>
int main()
{
	int x;
	printf("Enter the age of ravi");
	scanf("%d", &x);
	if(x>=18)
	{
		printf("He is allowed to apply for driving license");
	}
	else
	{ 
		printf("He is not allowed to apply for driving license");
		printf("\n He needs to wait for %d more years", 18-x);
	}
}

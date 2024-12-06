#include<stdio.h>
int main()
{
	int temp;
	printf("Enter the value of temperature");
	scanf("%d", &temp);
	if(temp<10)
	{
		printf("It's a cold day");
	}
	else if(temp<20)
	{
		printf("It's a cool day");
	}else if(temp<30)
	{
		printf("It's a warm day");
	}else if(temp<40)
	{
		printf("It's a hot day");
	}else 
	{
		printf("It's a hottest day");
	}
}

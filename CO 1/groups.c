#include<stdio.h>
int main()
{
	int number;
	printf("Enter the total number");
	scanf("%d", &number);
if(number<=10)
	{
		printf("They belong to group A");
	}else if(number<=20)
	{
		printf("They belong to group B");
	}else if(number<=30)
	{
		printf("They belong to group c");
	}else if(number<=40)
	{
		printf("They belong to group D");
	}else if(number<=50)
	{
		printf("They belong to group E");
	}else 
	{
		printf("They dont belong to any group");
	}
}
	

#include<stdio.h>
int main()
{
	int age;
	printf("Enter your age");
	scanf("%d", &age);
	if(age<=3)
	{
		printf("Infant");
	}
	else if(age<=12)
	{
	printf("KID");	
	}
	else if(age<=19)
	{
		printf("TEENAGE");
	}
	else if(age<40)
	{
		printf("YOUTH");
	}
	else if(age<60)
	{
		printf("MIDDLE AGE");
	}
	else 
	{
		printf("SENIOR CITIZEN");
	}
}

#include<stdio.h>
int main()
{
	int age, marks;
	printf("Enter your age");
	scanf("%d", &age);
	if(age>=18)
	{
		printf("Enter driving test marks");
		scanf("%d", &marks);
		if(marks>=75)
		{
		printf("congrats for license");
	}
	else
	{
		printf("Driving Test Failed");
	}
	else
	{
		printf("not allowed to apply for driving license");
	}
}
}

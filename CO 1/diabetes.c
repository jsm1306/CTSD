#include<stdio.h>
int main()
{
	int level;
	printf("Enter the diabetes level");
	scanf("%d", &level);
	if(level<5.5)
	{
		printf("The Patient is not diabetic");
	}else if(level<6.5)
	{
		printf("The Patient is Pre diabetic");
	}else if(level<8.5)
	{
		printf("The Patient is diabetic");
	}else 
	{
		printf("The Patient is highly diabetic");
	}
}

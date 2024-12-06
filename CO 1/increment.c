#include<stdio.h>
int main()
{
	int exp, feedback;
	printf("Enter the values");
	scanf("%d%d", &exp, &feedback);
	if(exp>=5 && feedback>=70)
	{
		printf("Increment is 50%%");
	}else if(exp>=5 || feedback>=70)
	{
		printf("Increment is 30%%");
	}
	else if(feedback>=60)
	{
		printf("Increment is 20%%");
	}
	else if(exp>=2)
		{
		printf("Increment is 10%%");
	}
	else
	{
		printf("Increment is 5%%");
	}	
}

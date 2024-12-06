#include<stdio.h>
int main()
{
	int i;
	scanf("%d", &i);
	if(i>=1 && i<=50)
	{
		printf("100%% scholarship");
	} else if(i>=51 && i<=100)
	{
		printf("50%% scholarship");
	} else
	{
		printf("No scholarship");
	}
}

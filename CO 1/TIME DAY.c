#include<stdio.h>
int main()
{
	int time;
	printf("Enter the time");
	scanf("%d", &time);
	if(time>0 && time<=3)
	{
		printf("GOOD NIGHT");
	} else if(time>3 && time<12)
	{
		printf("GOOD MORNING");
	}else if(time=12)
	{
		printf("GOOD NOON");
	}else if(time>12 && time<=15)
	{
		printf("GOOD AFTERNOON");
	}else 
	{
		printf("GOOD EVENING");
	}
}

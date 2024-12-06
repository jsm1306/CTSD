#include<stdio.h>
int main()
{
	int score;
	printf("Enter your score");
	scanf("%d", &score);
	if(score>=90)
	{
		printf("O");
	}
	else if(score>=80)
	{
	printf("VG");	
	}
	else if(score>=70)
	{
		printf("G");
	}
	else if(score>=60)
	{
		printf("A");
	}
	else if(score>=50)
	{
		printf("N");
	}
	else 
	{
		printf("F");
	}
}

#include<stdio.h>
int main()
{
	int x;
	printf("Enter the score");
	scanf("%d", &x);
	if(x>=70)
	{
		printf("She's allowed to play next level", x);
	}
	else
	{
		printf("She's not allowed to play the next level", x);
	}
}

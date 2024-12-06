#include<stdio.h>
int main()
{
	int pt, c;
	pt = 0;
	c= 0;
	while(pt<100)
	{
		printf("Enter your points");
		scanf("%d", &pt);
		c++;
	}
	printf("No of attempts made by krishna to win the game is %d", c);
}

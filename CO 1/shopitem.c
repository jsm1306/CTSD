#include<stdio.h>
int main()
{
	int x, y;
	printf("Enter the values");
	scanf("%d%d", &x, &y);
	if(x>=y)
	{
		printf("The leftover money is %d", x-y);
	}
}

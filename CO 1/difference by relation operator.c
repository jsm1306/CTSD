#include<stdio.h>
int main()
{
	int x, y, c;
	printf("Enter the two numbers");
	scanf("%d%d", &x, &y);
	if(x>y)
	{c=x-y;
		printf("The difference is %d", c);
	}else{
	c=y-x;
		printf("The difference is %d", c);
	}
}

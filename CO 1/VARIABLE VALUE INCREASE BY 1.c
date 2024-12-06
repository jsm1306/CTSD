#include<stdio.h>
int main()
{
	int x, c;
	printf("Enter a number");
	scanf("%d", &x);
	if(x%2==0)
	{c=++x;
		printf("%d", c);
	}else{
	c=--x;
	printf("%d", c);
}
}

#include<stdio.h>
int main()
{
	int a, b, c;
	printf("Enter the three scores");
	scanf("%d%d%d", &a, &b, &c);
	if((a>b) && (a>c))
	{
		printf("%d is the best score", a);
	} else if(b>c)
	{
		printf("%d is the best score", b);
	}else
	{
		printf("%d is the best score", c);
	}
}

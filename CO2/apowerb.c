#include<stdio.h>
int main()
{
	int a, b, p, i;
	printf("Enter two numbers");
	scanf("%d%d", &a, &b);
	p=1;
	i=1;
	while(i<=b)
	{
		p=p*a;
		i++;
	}
	printf("power is %d", p);
}

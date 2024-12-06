#include<stdio.h>
int main()
{
	int p,i,a,b;
	printf("enter two numbers");
	scanf("%d%d", &a, &b);
	p=0;
	i=1;
	while(i<=b)
	{
		p=p+a;
		i++;
	}
	printf("%d", p);
}

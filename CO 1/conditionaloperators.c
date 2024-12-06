#include<stdio.h>
int main()
{
	int a, b, c, d;
	printf("Enter two numbers");
	scanf("%d%d", &a, &b);
	(a<b)?(c=a+b , d=a*b):(c=a/b, d = a%b);
	printf("c is %d, d is %d", c,d);
}

#include<stdio.h>
int main()
{
	int a, b, c;
	printf("Enter the values of three angles");
	scanf("%d%d%d", &a, &b, &c);
	if(a+b+c==180)
	{
	printf("The triangle can be formed");
} else
{
	printf("The triangle cannot be formed");
}
}

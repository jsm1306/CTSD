#include<stdio.h>
void area2(int l, int b)
{
	int a;
	a=l*b;
	printf("Area = %d",a);
}
int main()
{
	int l,b,a;
	printf("Enter l and b values: ");
	scanf("%d %d", &l, &b);
	area2(l,b);
}

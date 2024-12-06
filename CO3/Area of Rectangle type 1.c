#include<stdio.h>
int area1(int l, int b)
{
	int a;
	a=l*b;
	return a;
}
int main()
{
	int l,b,a;
	printf("Enter l and b values: ");
	scanf("%d %d", &l, &b);
	a=area1(l,b);
	printf("%d",a);
}

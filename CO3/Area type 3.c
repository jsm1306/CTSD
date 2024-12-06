#include<stdio.h>
int area3()
{
	int l,b,a;
	printf("Enter l and b values: ");
	scanf("%d %d", &l, &b);
	a=l*b;
	return a;
}
int main()
{
	int a;
	a=area3();
	printf("Area = %d",a);
}

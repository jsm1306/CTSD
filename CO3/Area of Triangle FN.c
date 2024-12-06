#include<stdio.h>
float area(int a,int b,int c)
{
	float s,x;
	s=(float)(a+b+c)/3;
	x=s(s-a)(s-b)(s-c);
	return x;
}
int main()
{
	float x,o;
	int a,b,c;
	printf("Enter 3 numbers: ");
	scanf("%d %d %d", &a, &b, &c);
	o=area(a,b,c);
	x=sqrt(o);
	printf("Area of triangle= %f",x);
}

#include<stdio.h>
float area(float r)
{
	float x;
	x=3.14*r*r;
	return x;
}
int main()
{
	float x;
	float r;
	printf("Enter radius: ");
	scanf("%f", &r);
	x=area(r);
	printf("Area= %.2f",x);
}

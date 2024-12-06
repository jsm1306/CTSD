//write a c program to find area of a circle
#include<stdio.h>
float area (float r)
{
	float s;
	s=r*r*3.14;
	return s;
}
int main()
{
	float s,r;
	printf("Enter radius of circle: ");
	scanf("%f",&r);
	s=area(r);
	printf("Area of a circle is %f",s);
}

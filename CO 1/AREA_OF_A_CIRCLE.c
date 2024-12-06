#include<stdio.h>
int main()
{
	float area, perimeter, pi, radius;
	printf("Enter the value of radius");
	scanf("%f", &radius);
	pi = 3.14;
	area = pi*radius*radius;
	perimeter = 2*pi*radius;
	printf("The area of the circle is %f", area);
	printf("The perimeter of the circle is %f", perimeter);
}

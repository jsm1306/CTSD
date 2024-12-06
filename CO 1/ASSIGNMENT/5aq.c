#include<stdio.h>
int main()
{
	float radius, height, tsa, pi;
	printf("Enter the values of radius and height");
	scanf("%f%f", &radius, &height);
	pi = 3.14;
	tsa = ((2*pi*radius)*radius+height);
	printf("The total surface area is %f", tsa);
}

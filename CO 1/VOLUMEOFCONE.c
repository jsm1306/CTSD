#include<stdio.h>
int main()
{
	float radius, height, volume, pi;
	printf("Enter the values of radius and height");
	scanf("%f%f", &radius, &height);
	pi = 3.14;
	volume = (pi*radius*radius*height)/3;
	printf("The volume of the cone is %f", volume);
}

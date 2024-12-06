#include<stdio.h>
float volume(int r, int h);
int main()
{
	int r, h;
	float s ;
	printf("Enter the values of radius and height: ");
	scanf("%d %d", &r, &h);
	s=volume(r,h);
	printf("The Volume of the Cone is: %.2f",s);
}
float volume(int r, int h)
{
	float v;
	v=(float)(3.14*r*r*h)/3;
	return v;
}

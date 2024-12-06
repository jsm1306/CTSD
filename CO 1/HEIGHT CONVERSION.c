#include<stdio.h>
int main()
{
	int feet, inches;
	float cm;
	printf("Enter feet and inches");
	scanf("%d%d", &feet, &inches);
	cm = 30*feet + 2.5*inches;
	printf("The height in centimeters is %.2f", cm);
}

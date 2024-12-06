#include<stdio.h>
int main()
{
	int distance, Fuel_Consumption;
	float mpg;
	printf("Enter the distance travelled");
	scanf("%d", &distance);
	printf("Enter the fuel consumed");
	scanf("%d", &Fuel_Consumption);
	mpg =(float)distance/Fuel_Consumption;
	printf("The Fuel Efficiency in Miles Per Gallon is %f", mpg);
}

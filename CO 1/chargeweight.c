#include<stdio.h>
int main()
{
	float weight, charge;
	printf("Enter the weight");
	scanf("%f" ,&weight);
	if(weight<=2)
	{
		printf("The charge is 32.50");
	} else if(weight>2) 
	{ charge= ((weight-2)*10.50)+32.50;
		printf("The charge is %.2f", charge);
	}
}

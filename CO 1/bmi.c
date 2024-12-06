#include<stdio.h>
int main()
{
	float height, weight, BMI;
	printf("Enter your height in metres");
	scanf("%f", &height);
	printf("\nEnter your weight in kg");
	scanf("%f", &weight);
	BMI = weight/(height*height);
	if(BMI<15)
	{
		printf("Very Lean");
	}
	else if(BMI<=20)
	{
		printf("Lean");
	}
	else if(BMI<=23)
	{
		printf("Moderate");
	}
	else if(BMI<25)
	{
		printf("Fat");
	}
	else
	{
		printf("Obese");
	}
}

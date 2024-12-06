#include<stdio.h>
int main()
{
	int units, cost;
	printf("Enter the units");
	scanf("%d", &units);
	if(units<50)
	{
		cost = units*2;
	} else if(units<=100)
	{
		cost = units*3;
	} else if(units<=300)
	{
		cost = (units*5)+100;
	} else if(units<=450)
	{
		cost = (units*6)+200;
	} else 
	{
		cost = (units*8)+250;
	}
	printf("The cost is Rs %d", cost);
}

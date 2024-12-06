#include<stdio.h>
int main()
{
	int d, amount;
	printf("Enter purchase amount");
	scanf("%d", &amount);
	d= (float)(20*amount)/100;
	if(amount>=25000)
	{
		printf("The discount amount is %d", d);
		printf("\nThe total amount is %d", amount-d);
	}
	else if(amount>=15000)
	{d= (float)(15*amount)/100;
		printf("The discount amount is %d", d);
		printf("\nThe total amount is %d", amount-d);
	}
	else if(amount>=10000)
	{d= (float)(10*amount)/100;
		printf("The discount amount is %d", d);
		printf("\nThe total amount is %d", amount-d);
	}
	else if(amount>=5000)
	{d= (float)(5*amount)/100;;
		printf("The discount amount is %d", d);
		printf("\nThe total amount is %d", amount-d);
	}
	else if(amount>=2000)
	{d= (float)(3*amount)/100;
		printf("The discount amount is %d", d);
		printf("\nThe total amount is %d", amount-d);
	}
	else 
	{
		printf("There is no discount");
		printf("\nThe total amount is %d", amount);
	}
	printf("\nThankyou, Visit Again");
}

#include<stdio.h>
int main()
{
	float salary, hra, da, ta, it;
	printf("Enter the basic salary");
	scanf("%f", &salary);
	if(salary<=10000.0)
	{
		hra = salary*0.15;
		da = salary*0.5;
		ta = salary*0.05;
		it = salary*0;
	}
	else if(salary<=25000.0)
	{
		hra = salary*0.3;
		da = salary*0.75;
		ta = salary*0.25;
		it = salary*0.15;
	}else if(salary<=50000.0)
	{
		hra = salary*0.4;
		da = salary*0.9;
		ta = salary*0.35;
		it = salary*0.25;
	}else 
	{
		hra = salary*0.55;
		da = salary*1.15;
		ta = salary*0.40;
		it = salary*0.30;
	}
	printf("The Gross Salary is %f", salary + hra + da + ta );
	printf("\nThe Net Salary is %f", salary + hra + da + ta - it );
}

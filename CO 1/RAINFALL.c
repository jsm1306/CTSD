#include<stdio.h>
int main()
{
	int j, f, m, a;
	float avg;
	printf("Enter the values of rainfall");
	scanf("%d%d%d%d", &j, &f, &m, &a);
	avg = (j+f+m+a)/4;
	printf("The average rainfall of 4 months is %f",avg);
	
}

#include<stdio.h>
float average(int a, int b)
{
	float avg;
	avg=(float)(a+b)/2;
	return avg;
}
int main()
{
	float avg;
	int a, b;
	printf("Enter two numbers: ");
	scanf("%d %d",&a, &b);
	avg=average(a,b);
	printf("Average of two numbers is %.2f",avg);
}

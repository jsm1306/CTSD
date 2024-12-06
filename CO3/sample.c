//Write a c program using functions to find the square of a given number
#include<stdio.h>
int product (int a,int b)
{
	int s;
	s=a*b;
	return s;
}
int main()
{
	int a,b,s;
	printf("Enter 2 numbers: ");
	scanf("%d %d",&a, &b);
	s=product(a,b);
	printf("Product of 2 number is %d",s);
}


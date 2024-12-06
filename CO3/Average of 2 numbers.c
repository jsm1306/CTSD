//Write a c program using functions to find the square of a given number
#include<stdio.h>
int square (int a);
int main()
{
	int n,s;
	printf("Enter a number: ");
	scanf("%d",&n);
	s=square(n);
	printf("Square of a number is %d",s);
}
int square (int a)
{
	int s;
	s=a*a;
	return s;
}

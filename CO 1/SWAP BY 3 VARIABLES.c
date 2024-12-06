#include<stdio.h>
int main()
{
	float a,b,c;
	printf("Enter 2 float numbers");
	scanf("%f%f",&a,&b);
	printf("Before swap %.1f %.1f ",a,b);
	c=a; // value of a is stored in c
	a=b; // value of b is stored in a
	b=c; // value of c is stroed in b;
	printf("\nAfter swap %.1f %.1f ",a,b);
}

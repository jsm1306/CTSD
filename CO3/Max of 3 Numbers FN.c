#include<stdio.h>
int max3(int,int,int);
int main()
{
	int a, b, c,s;
	printf("Enter 3 numbers: ");
	scanf("%d %d %d", &a, &b, &c);
	s=max3(a,b,c);
	printf("The maximum of three given numbers is: %d",s);
}
int max3(int a, int b, int c)
{
	if(a>b && a>c)
	return a;
	else if(b>c)
	return b;
	else
	return c;
}

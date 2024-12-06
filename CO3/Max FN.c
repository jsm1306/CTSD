#include<stdio.h>
int max(int a, int b)
{
	if(a<b)
	return b;
	else 
	return a;
}
int main()
{
	int x,a,b;
	printf("Enter two numbers: ");
	scanf("%d %d", &a, &b);
	x=max(a,b);
	printf("Maximum of two numbers= %d",x);
}

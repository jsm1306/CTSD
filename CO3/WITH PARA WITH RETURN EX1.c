#include<stdio.h>
int square(int s)
{
	int x;
	x=s*s;
	return x;
}
int main()
{
	int x,s;
	printf("Enter a number: ");
	scanf("%d", &x);
	s=square(x);
	printf("Square= %d",s);
}

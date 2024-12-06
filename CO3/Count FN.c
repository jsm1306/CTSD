#include<stdio.h>
int count(int n)
{
	int i,c=0;
	for(i=n;i>0;i/=10)
	{
		c++;
	} return c;
}
int main()
{
	int n,s;
	printf("Enter a number: ");
	scanf("%d", &n);
	s=count(n);
	printf("Number of digits = %d",s);
}

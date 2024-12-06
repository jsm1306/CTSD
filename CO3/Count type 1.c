#include<stdio.h>
int count1(int n)
{
	int i,c=0;
	for(i=n;i>0;i=i/10)
	{
		c++;
	} return c;
}
int main()
{
	int n,c;
	printf("Enter a number: ");
	scanf("%d",&n);
	c=count1(n);
	printf("Number of Digits = %d",c);
}

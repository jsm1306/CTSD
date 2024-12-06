#include<stdio.h>
void count2(int n)
{
	int i,c=0;
	for(i=n;i>0;i=i/10)
	{
		c++;
	}printf("Number of Digits = %d",c);
}
int main()
{
	int n;
	printf("Enter a number: ");
	scanf("%d",&n);
	count1(n);
}

#include<stdio.h>
int sumoffirstn(int n)
{
	int i, sum;
	for(i=1,sum=0;i<=n;i++)
	{
		sum=sum+i;
	}
	return sum;
}
int main()
{
	int x,s;
	printf("Enter a number: ");
	scanf("%d", &x);
	s=sumoffirstn(x);
	printf("The sum of first N natural numbers is: %d",s);
}

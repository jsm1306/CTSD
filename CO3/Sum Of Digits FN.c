#include<stdio.h>
int sumofdigits(int n)
{
	int r, i, sum;
	for(i=n,sum=0;i>0;i=i/10)
	{
		r=i%10;
		sum=sum+r;
	}
	return sum;
}
int main()
{
	int x,s;
	printf("Enter a number: ");
	scanf("%d", &x);
	s=sumofdigits(x);
	printf("The sum of digits of given number is: %d",s);
}

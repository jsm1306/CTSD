#include<stdio.h>
int main()
{
	int n, i,c,d;
	printf("Enter a number");
	scanf("%d", &n);
	// x should be even
	for(c=0,i=n;i!=0;i=i/10)
	{ if(i%2==0)
	{
		c++;
	}
	}	printf("number of even numbers in %d is %d",n, c);
	for(d=0,i=n;i!=0;i=i/10)
if(i%2!=0)
{
	{
		d++;
	}
	}	printf("\nnumber of odd numbers in %d is %d",n, d);
if(c>d)
{
	printf("\nEven Importance");
} else if(c<d)
{
	printf("\nOdd Importance");
}else
{
	printf("\nNeutral Importance");
}
}


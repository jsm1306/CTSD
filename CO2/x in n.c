#include<stdio.h>
int main()
{
	int n, i,c,x;
	printf("Enter a number: ");
	scanf("%d", &n);
	printf("Enter the digit you want to find in the number: ");
	scanf("%d", &x);
	for(c=0,i=n;i!=0;i=i/10)
	{ if(x==i%10)
	{
		c++;
	}
	} 	printf("%d has occured %d no. of times",x, c);
}

#include<stdio.h>
int count3()
{
	int n,i,c=0;
	printf("Enter a number: ");
	scanf("%d",&n);
	for(i=n;i>0;i=i/10)
	{
		c++;
	} return c;
}
int main()
{
	int c;
	c=count3();
	printf("%d",c);
	
}

#include<stdio.h>
void count4()
{
	int n,c=0,i;
	printf("Enter a number: ");
	scanf("%d",&n);
	for(i=n;i>0;i=i/10)
	{
		c++;
	}
	printf("Number of Digits = %d",c);
}
int main()
{
	count4();
}

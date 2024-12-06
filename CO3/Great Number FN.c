#include<stdio.h>
int sum(int n)
{
	int i, sum,r;
	for(i=n,sum=0;i>0;i=i/10)
	{
		r=i%10;
		sum=sum+r;
	} return sum;
} 
int product(int n)
{
int i, product,r;
	for(i=n,product=1;i>0;i=i/10)
	{
		r=i%10;
		product=product*r;
	} return product;
}
int main()
{
	int n,s,p;
	printf("Enter a number: ");
	scanf("%d", &n);
	s=sum(n);
	p=product(n);
	if(s>p)
	{
		printf("%d is a great number",n);
	} else
	{
		printf("%d is not a great number",n);
	}
}

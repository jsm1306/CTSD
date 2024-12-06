#include<stdio.h>
int main()
{
	int n, sum, product;
	printf("Enter a 2 digit number");
	scanf("%d", &n);
	sum= (n/10)+ (n%10);
	product = (n/10)* (n%10);
	if(sum > product)
	{
	printf("the number is handsome");	
	}
	else
	{
	printf("the number is beautiful");	
	}
}

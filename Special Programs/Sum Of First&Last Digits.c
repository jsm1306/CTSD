#include<stdio.h>
int main()
{
	int i, l, f,n;
	printf("Enter a number: ");
	scanf("%d", &n);
	l=n%10;
	for(i=n;i>0;i=i/10)
	{
		f=i%10;
	} printf("The sum of first and last digits of the given number is: %d",l+f);
}

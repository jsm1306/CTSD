#include<stdio.h>
int main()
{
	int i, n, r, p;
	printf("Enter a number: ");
	scanf("%d", &n);
	for(i=n,p=1;i>0;i=i/10)
	{
		r=i%10;
		p=p*r;
	} printf("The product of digits: %d", p);
}

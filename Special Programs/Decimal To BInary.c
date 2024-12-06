#include<stdio.h>
int main()
{
	long long int bin=0;
	int rem, place=1, i, n;
	printf("Enter a number: ");
	scanf("%d", &n);
	for(i=n;i>0;i=i/2)
	{
		rem=i%2;
		bin=bin + rem*place;
		place=place*10;
	} printf("%lld",bin);
}

#include<stdio.h>
#include<math.h>
int main()
{
	long long int n;
	int dec=0, i, rem;
	printf("Enter a binary number: ");
	scanf("%lld", &n);
	for(i=0;n>0;n=n/10,i++)
	{
		rem=n%10;
		dec=dec+rem*pow(2,i);
	} printf("%d",dec);
}

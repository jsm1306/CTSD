#include<stdio.h>
#include<math.h>
int main()
{
	long long n;
	printf("Enter a number: ");
	scanf("%lld",&n);
	printf("The decimal equivalent of %lld is: \n",n);
	int dec, rem, i;
	for(i=0,dec=0;n!=0;i++,n=n/10)
	{
		rem=n%10;
		dec=dec+rem*pow(2,i);
	} printf("%d",dec);
	
}

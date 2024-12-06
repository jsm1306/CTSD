#include<stdio.h>
int main()
{
	int num,i,rem=0;
	long long bin=0, place=1;
	printf("Enter a decimal number: ");
	scanf("%d", &num);
	printf("The binary equivalent of %d is: ", num);
	for(i=num;i>0;i=i/2)
	{
		rem = i%2;
		bin = bin + (rem*place);
		place =  place*10;
	} printf("%lld",bin);
}

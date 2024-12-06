#include<stdio.h>
#include<math.h>
int main()
{
	int n, i, r, sum;
	printf("Enter a 3 digit number");
	scanf("%d", &n);
	for(sum=0,i=n;i>0;i=i/10)
	{
		r=i%10;
		sum = sum+ pow(r,3);
	} printf("Sum = %d", sum);
	if(sum==n)
	{
		printf("\n%d is armstrong number", n);
	}else
	{
		printf("\n%d is not armstrong number", n);
	}
}

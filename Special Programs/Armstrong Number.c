#include<stdio.h>
#include<math.h>
int main()
{
	int i, n, r, c=0, sum=0;
	printf("Enter a number: ");
	scanf("%d", &n);
	for(i=n;i>0;i=i/10)
	{
		c++;
	} for(i=n;i>0;i=i/10)
	{
		r=i%10;
		sum=sum+pow(r,c);
	} if(sum==n)
	printf("%d is a armstrong number",n);
	else
	printf("%d is not a armstrong number",n);
}

#include<stdio.h>
#include<math.h>
int main()
{
	int i, n, r, s;
	printf("Enter a number: ");
	scanf("%d", &n);
	for(i=n,s=0;i>0;i=i/10)
	{
		r=i%10;
		s=s+pow(r,2);
	} printf("The sum of digits: %d", s);
}

#include<stdio.h>
int main()
{
	int i,n,r,s;
	printf("Enter a number: ");
	scanf("%d", &n);
	for(i=1,s=0;i<=n/2;i++)
	{
		r=n%i;
		if(r==0)
		{
			s=s+i;
		}
	}
	if(s=n)
	{
		printf("%d is a perfect number",n);
	}
}

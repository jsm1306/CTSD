#include<stdio.h>
int main()
{
	int i,n,r,s=0;
	printf("Enter a number: ");
	scanf("%d",&n);
	for(i=n;i>0;i=i/10)
	{
		r=i%10;
		s=s+r;
	}printf("%d",s);
}

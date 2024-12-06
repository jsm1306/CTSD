#include<stdio.h>
int gcd(int n, int m)
{
	int r;
	r=n%m;
	if(r==0)
	{
		return m;// m will be small, so m becomes gcd
	}
	else
	{
		return gcd(m,r);//n becomes m, m becomes r
	}
}
int main()
	{
		int n,m,g;
		printf("Enter 2 numbers: ");
		scanf("%d %d",&n, &m);
		if(n>m)
		{
			g=gcd(n,m);
		}
		else
		{
			g=gcd(m,n);
		}
		printf("Gcd of %d and %d is %d",n,m,g);
	}

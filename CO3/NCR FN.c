#include<stdio.h>
int factorial(int );
int main()
{
	int n,r,x,nf,rf,xf,ncr;
	printf("Enter n and r values: ");
	scanf("%d %d", &n, &r);
	nf = factorial(n);
	rf = factorial(r);
	x=n-r;
	xf = factorial(x);
	ncr = nf/(rf*xf);
	printf("NCR = %d",ncr);
}
int factorial(int a)
{
	int f,i;
	for(f=1,i=a;i>0;i--)
	{
		f=f*i;
	} return f;
}

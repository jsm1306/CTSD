#include<stdio.h>
int power(int n,int v)
{
	if(v==0)
	{
		return 1;
	}
	else
	{
		return n*power(n,v-1);
	}
}
int main()
	{
		int n, f,v;
		printf("Enter a number: ");
		scanf("%d",&n);
		printf("Enter a number: ");
		scanf("%d",&v);
		f=power(n,v);
		printf(" %d power %d is %d",n,v,f);
	}

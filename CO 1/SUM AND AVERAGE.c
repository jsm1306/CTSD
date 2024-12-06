#include<stdio.h>
int main()
{
	int l,m,n,s;
	float a;
	printf("Enter the values of l, m and n");
	scanf("%d",&l);
	scanf("%d",&m);
	scanf("%d",&n);
	s = l+m+n;
	a = s/3.0 ;
	printf("Sum of the numbers is %d", s);
	printf("\nAverage of the numbers is %.2f", a);
}

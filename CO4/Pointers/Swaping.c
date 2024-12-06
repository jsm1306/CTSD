#include<stdio.h>
int main()
{
	int a;
	int b;
	int x;
	printf("Enter a and b: ");
	scanf("%d %d",&a,&b);
	int *p,*q,*r;
	p=&a;
	q=&b;
	r=&x;
	*r=*p;
	*p=*q;
	*q=*r;
	printf("After swaping,(a) is %d,(b) is %d",*p,*q);
}

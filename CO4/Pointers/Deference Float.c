#include<stdio.h>
int main()
{
	float a=2.78;
	float b=3.14;
	float *p, *q,*r,c;
	p=&a;
	q=&b;
	r=&c;
	*r=*p + *q;
	printf("%.2f",*r);
}

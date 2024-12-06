#include<stdio.h>
int main()
{
	float p, t, r, si, amt;
	printf("Enter the values of p,t,r");
	scanf("%f%f%f", &p, &t, &r);
	si = (p*t*r);
	amt = p+si;
	printf("The simple interest is %f", si);
	printf("\nThe total amount is %f", amt);
}

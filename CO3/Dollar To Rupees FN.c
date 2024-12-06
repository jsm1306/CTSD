#include<stdio.h>
float dtor(float );
int main()
{
	float d,r;
	printf("Enter amount in dollars: ");
	scanf("%f", &d);
	r=dtor(d);
	printf("The amount in Rupees is: %.2f",r);	
}
float dtor(float d)
{
	float r;
	r=83.217*d;
	return r;
}

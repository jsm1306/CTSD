#include<stdio.h>
int main()
{
	float q,w,e;
	printf("Enter two numbers: ");
	scanf("%f %f",&e,&w);
	q=e+(w*(e/100));
	printf("\n%f",q);
}
